#!/usr/bin/env python
# -*- coding: utf-8 -*-

# DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
#  Version 2, December 2004
#
# Copyright (C) 2004 Sam Hocevar
#
# Everyone is permitted to copy and distribute verbatim or modified
# copies of this license document, and changing it is allowed as long
# as the name is changed.
#
# DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
# TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
#
# 0. You just DO WHAT THE FUCK YOU WANT TO.
#
# @Author Carlos Costa – ccosta@bsd.com.br
# @Date 07/09/2010
# @Expected Result: <01234567891011121314151617181920212223242526272829>
#   -Tested against Python Version <2.6.5>

def concat(loop):
  output = ""
  for num in range(loop):
      output += str(num)
  return output

def concat2(loop):
  output = []
  for num in range(loop):
    output.append(str(num))
  return "".join(output)

def concat3(loop):
  return "".join([str(num) for num in range(loop)])


print "will run with", 30, "numbers"
output = concat(30)
print "concat returned", output
output = concat2(30)
print "concat2 returned", output
output = concat3(30)
print "concat3 returned", output
