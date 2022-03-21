# Definitions of vector type for RISC-V built-in functions.  -*- C -*-
# Copyright (C) 2021-2021 Free Software Foundation, Inc.
# Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.
# 
# This file is part of GCC.
# 
# GCC is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
# 
# GCC is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with GCC; see the file COPYING3.  If not see
# <http://www.gnu.org/licenses/>.

import os
import sys


def print_err(msg):
    print("\033[31m\033[1mRISCV md parser Error: %s\033[0m\033[0m" % msg)


def write_to_file(file_path, one_line, opt='a+'):
    dir_name = os.path.dirname(file_path)
    if dir_name is not None and len(dir_name) > 0:
        os.makedirs(dir_name, exist_ok=True)
    with open(file_path, opt, encoding="utf-8") as f:
        f.write(one_line)


def get_prologue():
    return """/* Do not modify this file, it auto gen by riscv_md_parser.py script */
#ifndef DEF_RISCV_ARG_MODE_ATTR_VARIABLE
#define DEF_RISCV_ARG_MODE_ATTR_VARIABLE(A, B)
#endif

#ifndef DEF_RISCV_ARG_MODE_ATTR
#define DEF_RISCV_ARG_MODE_ATTR(A, B, C, D, E)
#endif

"""


def get_epilogue():
    return """
#undef DEF_RISCV_ARG_MODE_ATTR_VARIABLE
#undef DEF_RISCV_ARG_MODE_ATTR
"""


def gen_mode_attr(def_seg):
    result_str = ""
    element_cnt = 0
    for value_seg in def_seg.value_segment_list:
        splitted_value_seg_string = value_seg.string.split()
        if len(splitted_value_seg_string) == 2:
            # we only want the def_seg for intrinsics function code which has the "mode" as right hand side value
            attr = splitted_value_seg_string[1]
            if not attr.isdigit() and (attr.upper().replace('X', 'x') == attr) and not attr.startswith ("0x"):
                result_str += "DEF_RISCV_ARG_MODE_ATTR(%s, %d, %s, %s, %s)\n" % (
                    def_seg.name, element_cnt, splitted_value_seg_string[0], attr, "TARGET_FP16" if attr.count("HF") > 0 else "TARGET_HARD_FLOAT" if attr.count("SF") > 0 else "TARGET_DOUBLE_FLOAT" if attr.count("DF") > 0 else "TARGET_ANY")
                element_cnt += 1
            else:
                # if the mode_attr is not a totally attribute with the "mode" value, ignore the whole pack
                return ""
        else:
            print_err("Value Segment(%s) in \"%s\" maybe not right for \"%s\"" % (
                value_seg.string, def_seg.name, def_seg.def_type))
    if len(result_str) > 0:
        result_str = "DEF_RISCV_ARG_MODE_ATTR_VARIABLE(%s, %d)\n%s" % (def_seg.name, element_cnt, result_str)
    return result_str


def gen_mode_iterator(def_seg):
    result_str = ""
    element_cnt = 0
    for value_seg in def_seg.value_segment_list:
        splitted_value_seg_string = value_seg.string.split()
        if len(splitted_value_seg_string) == 1:
            result_str += "DEF_RISCV_ARG_MODE_ATTR(%s, %d, %s, %s, TARGET_ANY)\n" % (
                def_seg.name, element_cnt, value_seg.string, value_seg.string)
            element_cnt += 1
        elif len(splitted_value_seg_string) == 2:
            result_str += "DEF_RISCV_ARG_MODE_ATTR(%s, %d, %s, %s, %s)\n" % (
                def_seg.name, element_cnt, splitted_value_seg_string[0], splitted_value_seg_string[0],
                splitted_value_seg_string[1])
            element_cnt += 1
        else:
            print_err("Value Segment(%s) in \"%s\" maybe not right for \"%s\"" % (
                value_seg.string, def_seg.name, def_seg.def_type))
    if len(result_str) > 0:
        result_str = "DEF_RISCV_ARG_MODE_ATTR_VARIABLE(%s, %d)\n%s" % (def_seg.name, element_cnt, result_str)
    return result_str


class Segment:
    def __init__(self):
        self.string = ""
        self.parentheses = 0

    def append(self, char_value):
        self.string += char_value
        self.parentheses += 1 if char_value == '(' else -1 if char_value == ')' else 0

    def is_intact(self):
        return self.parentheses == 0

    def strip_self(self):
        self.string = self.string.replace('(', '').replace(')', '').replace('"', ' ')
        self.string = self.string.strip()
        return self

    def __str__(self):
        return self.string


class DefSegment(Segment):
    def __init__(self):
        super().__init__()
        self.def_type = ""
        self.name = ""
        self.value_str = ""
        self.value_segment_list = []

    def make_value_segments(self):
        # split value string into multiple value segments which will contain a single or a double value array
        i = 0
        current_value_segment = None
        while i < len(self.value_str):
            if self.value_str[i] != ' ' and current_value_segment is None:
                # new segment start
                current_value_segment = Segment()
                current_value_segment.append(self.value_str[i])
            elif current_value_segment is not None:
                current_value_segment.append(self.value_str[i])
                if current_value_segment.is_intact() and (
                        current_value_segment.string.endswith(' ') or current_value_segment.string.endswith(')')):
                    self.value_segment_list.append(current_value_segment.strip_self())
                    current_value_segment = None
            i += 1
        # append the last segment which is missed by the while loop
        if current_value_segment is not None:
            self.value_segment_list.append(current_value_segment.strip_self())

    def parse(self):
        if len(self.string) == 0:
            return False
        if self.string.count('[') != 1 or self.string.count(']') != 1:
            print_err("\"%s\" is not a valid [...] format string" % self.string)
            return False
        # ignore the '(' and ')'
        self.string = self.string[1:len(self.string) - 1]
        self.def_type = self.string.split()[0]
        self.name = self.string.split()[1]
        # get the value string inside '[' and ']'
        self.value_str = self.string[self.string.index('[') + 1:self.string.index(']')].strip()
        self.make_value_segments()
        return True


if __name__ == '__main__':
    local_dir = os.path.dirname(os.path.realpath(__file__))
    output_file = local_dir + '/' + sys.argv[1]
    target_md_files = []
    for arg in sys.argv[2:]:
        target_md_files.append(local_dir + '/' + arg)
    segment_list = []
    for md_file in target_md_files:
        with open(md_file) as file:
            current_segment = None
            for line in file.readlines():
                stripped_line = line.strip()
                if stripped_line.startswith(";;"):
                    continue
                if stripped_line.count("(") > 0 or current_segment is not None:
                    char_index = 0
                    # add a space at the end of the stripped_line for further split
                    stripped_line += " "
                    while char_index < len(stripped_line):
                        if stripped_line[char_index] == '(' and current_segment is None:
                            # new segment start
                            current_segment = DefSegment()
                            current_segment.append('(')
                        elif current_segment is not None:
                            current_segment.append(stripped_line[char_index])
                            if current_segment.is_intact():
                                segment_list.append(current_segment)
                                current_segment = None
                        char_index += 1
    output_str = get_prologue()
    for segment in segment_list:
        if not segment.parse():
            continue
        if segment.def_type == "define_mode_iterator":
            output_str += gen_mode_iterator(segment)
        elif segment.def_type == "define_mode_attr":
            output_str += gen_mode_attr(segment)
    output_str += get_epilogue()
    write_to_file(output_file, output_str, opt='w')
