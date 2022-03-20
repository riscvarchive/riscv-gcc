;; Machine description for RISC-V vector optimization operations.
;; Copyright (C) 2011-2021 Free Software Foundation, Inc.
;; Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

;; This file is part of GCC.

;; GCC is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation; either version 3, or (at your option)
;; any later version.

;; GCC is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with GCC; see the file COPYING3.  If not see
;; <http://www.gnu.org/licenses/>.

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vwredsum.vs
;; - vwredsumu.vs
;; - vfwredosum.vs
;; - vfwredusum.vs
;; -------------------------------------------------------------------------

(define_insn "v<sz>ext_vredsum<VWREDI:mode>_to_vwredsum<u>_<P:mode>"
  [(set (match_operand:<VWLMUL1> 0 "register_operand" "=&vr")
    (unspec:<VWLMUL1> 
      [(unspec:<VM> 
        [(const_int 0)
         (unspec:<VWLMUL1> 
          [(const_int 0)
           (unspec:<VWLMUL1> 
            [(unspec:<VWLMUL1> 
              [(const_int 0)
               (any_extend:<VWLMUL1> 
                (match_operand:VWREDI 1 "register_operand" "vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 4 "p_reg_or_const_csr_operand")
             (match_operand 5 "const_int_operand")
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
           (unspec:<VWLMUL1> 
             [(unspec:<VWLMUL1> 
               [(match_operand:<VWLMUL1> 2 "const_vector_0_operand")
                (const_int 0)
                (const_int 1)] UNSPEC_VMV_SX)
              (reg:P X0_REGNUM)
              (match_dup 5)
              (reg:SI VL_REGNUM)
              (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_REDUC_SUM)
         (const_int 0)] UNSPEC_SELECT)
       (reg:P X0_REGNUM)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
   (clobber (match_scratch:<VWLMUL1> 3 "=&vr"))]
  "TARGET_VECTOR"
  "vmv.v.i\t%3,0\;vwredsum<u>.vs\t%0,%1,%3"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<VWREDI:MODE>")])

(define_insn "vfwcvt_vfredsum<VWREDF:mode>_to_vfwredusum_<P:mode>"
  [(set (match_operand:<VWLMUL1> 0 "register_operand" "=&vr")
    (unspec:<VWLMUL1> 
      [(unspec:<VM> 
        [(const_int 0)
         (unspec:<VWLMUL1> 
          [(const_int 0)
           (unspec:<VWLMUL1> 
            [(unspec:<VWLMUL1> 
             [(const_int 0)
              (float_extend:<VWLMUL1> 
                (match_operand:VWREDF 1 "register_operand" "vr"))
              (const_int 0)] UNSPEC_SELECT)
             (match_operand 3 "p_reg_or_const_csr_operand")
             (match_operand 4 "const_int_operand")
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
           (unspec:<VWLMUL1> 
            [(unspec:<VWLMUL1> 
             [(const_int 0)
              (const_int 1)] UNSPEC_VMV_SX)
             (reg:P X0_REGNUM)
             (match_dup 4)
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_REDUC_UNORDERED_SUM)
         (const_int 0)] UNSPEC_SELECT)
       (reg:P X0_REGNUM)
       (match_dup 4)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
   (clobber (match_scratch:<VWLMUL1> 2 "=&vr"))]
  "TARGET_VECTOR"
  "vmv.v.i\t%2,0\;vfwredusum.vs\t%0,%1,%2"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<VWREDF:MODE>")])

(define_insn "vfwcvt_vfredsum<VWREDF:mode>_to_vfwredosum_<P:mode>"
  [(set (match_operand:<VWLMUL1> 0 "register_operand" "=&vr")
    (unspec:<VWLMUL1> 
      [(unspec:<VM> 
        [(const_int 0)
         (unspec:<VWLMUL1> 
          [(const_int 0)
           (unspec:<VWLMUL1> 
            [(unspec:<VWLMUL1> 
              [(const_int 0)
               (float_extend:<VWLMUL1> 
                (match_operand:VWREDF 1 "register_operand" "vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 4 "p_reg_or_const_csr_operand")
             (match_operand 5 "const_int_operand")
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
           (unspec:<VWLMUL1> 
             [(unspec:<VWLMUL1> 
               [(vec_duplicate:<VWLMUL1> 
                 (match_operand:<VWSUB> 2 "register_operand" "r"))
                (const_int 0)
                (const_int 1)] UNSPEC_VMV_SX)
              (reg:P X0_REGNUM)
              (match_dup 5)
              (reg:SI VL_REGNUM)
              (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_REDUC_ORDERED_SUM)
         (const_int 0)] UNSPEC_SELECT)
       (reg:P X0_REGNUM)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
   (clobber (match_scratch:<VWLMUL1> 3 "=&vr"))]
  "TARGET_VECTOR"
  "vfmv.s.f\t%3,%2\;vfwredosum.vs\t%0,%1,%3"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<VWREDF:MODE>")])

;; -------------------------------------------------------------------------
;; ---- [INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes contiguous forms of:
;; - vle8.v
;; - vle16.v
;; - vle32.v
;; - vle64.v
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vload<mode>_vmerge_to_vle<mode>_mask"
  [(set (match_operand:V 0 "register_operand" "=vr")
    (unspec:V 
      [(const_int 0)
       (unspec:V 
        [(match_operand:<VM> 1 "register_operand" "vm")
         (match_operand:V 3 "register_operand" "vr")
         (unspec:V 
          [(unspec:V 
            [(match_operand:<VM> 2 "register_operand" "vm")
             (unspec:V 
              [(match_operand 4 "pmode_register_operand" "r")
               (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_LOAD)
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 6 "p_reg_or_const_csr_operand")
           (match_operand 7 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
      (match_dup 6)
      (match_operand 5 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vle (<MODE>mode, operands[0], operands[1], operands[3],
        operands[4], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vle")
   (set_attr "mode" "<MODE>")])
        
;; -------------------------------------------------------------------------
;; ---- [INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vadd.vx
;; - vadd.vi
;; - vsub.vx
;; - vrsub.vx
;; - vrsub.vi
;; - vmul.vx
;; - vand.vx 
;; - vor.vx
;; - vxor.vx 
;; - vmin.vx  
;; - vminu.vx  
;; - vmax.vx  
;; - vmaxu.vx  
;; - vmul.vx 
;; - vdiv.vx 
;; - vdivu.vx 
;; - vrem.vx 
;; - vremu.vx
;; - vsrl.vx
;; - vsll.vx
;; - vsra.vx
;; -------------------------------------------------------------------------

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VI 2 "register_operand" "0,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs:VI 
              (match_operand:VI 3 "register_operand" "vr,vr")
              (vec_duplicate:VI 
                (match_operand:<VSUB> 4 "register_operand" "r,r")))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_2"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VI 2 "register_operand" "0,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs:VI
              (vec_duplicate:VI 
                (match_operand:<VSUB> 4 "register_operand" "r,r"))
              (match_operand:VI 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<rinsn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<rinsn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs_simm5:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr")
              (match_operand:VI 4 "vector_arith_operand" "vr,vi,vr,vi"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vi\t%0,%3,%v4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "vsub<mode>_vmerge_to_vsub_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (minus:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr")
              (match_operand:VI 4 "vector_neg_arith_operand" "vr,vj,vr,vj"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vsub.vv\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%v4,%1.t
   vmv<lmul>r.v\t%0,%2\;vsub.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vadd.vi\t%0,%3,%v4,%1.t"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "vrsub<mode>_vmerge_to_vrsub_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (minus:VI 
              (match_operand:VI 4 "vector_arith_operand" "vr,vi,vr,vi")
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vsub.vv\t%0,%3,%4,%1.t
   vrsub.vi\t%0,%3,%v4,%1.t
   vmv<lmul>r.v\t%0,%2\;vsub.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vrsub.vi\t%0,%3,%v4,%1.t"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VI 2 "register_operand" "0,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs_reg:VI 
              (match_operand:VI 3 "register_operand" "vr,vr")
              (match_operand:VI 4 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_4"
  [(set (match_operand:V64BITI 0 "register_operand" "=vr,?&vr")
    (unspec:V64BITI 
      [(const_int 0)
       (unspec:V64BITI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:V64BITI 2 "register_operand" "0,vr")
         (unspec:V64BITI 
          [(unspec:V64BITI 
            [(const_int 0)
             (int_binary_vs:V64BITI 
              (match_operand:V64BITI 3 "register_operand" "vr,vr")
              (vec_duplicate:V64BITI
                (sign_extend:<VSUB>
                  (match_operand:SI 4 "register_operand" "r,r"))))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_5"
  [(set (match_operand:V64BITI 0 "register_operand" "=vr,?&vr")
    (unspec:V64BITI 
      [(const_int 0)
       (unspec:V64BITI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:V64BITI 2 "register_operand" "0,vr")
         (unspec:V64BITI 
          [(unspec:V64BITI 
            [(const_int 0)
             (int_binary_vs:V64BITI 
              (vec_duplicate:V64BITI
                (sign_extend:<VSUB>
                  (match_operand:SI 4 "register_operand" "r,r")))
              (match_operand:V64BITI 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (any_shift:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr")
              (match_operand 4 "p_reg_or_uimm5_operand" "r,K,r,K"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vi\t%0,%3,%4,%1.t"
  [(set_attr "type" "vshift")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfadd.vf
;; - vfsub.vf
;; - vfmul.vf
;; - vfmin.vf   
;; - vfmax.vf
;; -------------------------------------------------------------------------

(define_insn "vf<optab><mode>_vmerge_to_vf<optab>_mask"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
    (unspec:VF 
      [(const_int 0)
       (unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VF 2 "register_operand" "0,vr")
         (unspec:VF 
          [(unspec:VF 
            [(const_int 0)
             (fp_binary_vs:VF 
              (match_operand:VF 3 "register_operand" "vr,vr")
              (vec_duplicate:VF 
                (match_operand:<VSUB> 4 "register_operand" "f,f")))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vf<insn>.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vf<insn>.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "vf<optab><mode>_vmerge_to_v<optab>_mask_2"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr")
    (unspec:VF 
      [(const_int 0)
       (unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VF 2 "register_operand" "0,vr")
         (unspec:VF 
          [(unspec:VF 
            [(const_int 0)
             (fp_binary_vs:VF
              (vec_duplicate:VF 
                (match_operand:<VSUB> 4 "register_operand" "f,f"))
              (match_operand:VF 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand")
           (match_operand 6 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 5)
       (match_dup 6)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   vf<rinsn>.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vf<rinsn>.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])
   
;; -------------------------------------------------------------------------
;; ---- [INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vsext.vf2
;; - vzext.vf2
;; - vsext.vf4
;; - vzext.vf4
;; - vsext.vf8
;; - vzext.vf8
;; -------------------------------------------------------------------------

(define_insn "v<sz>ext<mode>_vf2_vmerge_to_v<sz>ext<mode>_vf2_mask"
  [(set (match_operand:VEXTI 0 "register_operand" "=vr,?&vr")
    (unspec:VEXTI 
      [(const_int 0)
       (unspec:VEXTI 
        [(unspec:<VM> 
          [(not:<VM> 
            (match_operand:<VM> 1 "register_operand" "vm,vm"))
           (match_operand 4 "p_reg_or_const_csr_operand")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
         (unspec:VEXTI 
          [(unspec:VEXTI 
            [(const_int 0)
             (any_extend:VEXTI 
              (match_operand:<VN> 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_dup 4)
           (match_dup 5)
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
         (match_operand:VEXTI 2 "register_operand" "0,vr")] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "@
   v<sz>ext.vf2\t%0,%3,%1.t
   vmv<lmul>r.v\t%0,%2\;v<sz>ext.vf2\t%0,%3,%1.t"
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<MODE>")])