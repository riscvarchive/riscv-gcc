;; Machine description for RISC-V vector optimization operations.
;; Copyright (C) 2022-2022 Free Software Foundation, Inc.
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
;; ---- [INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vsetvli/vsetivl/vsetvl
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "*vsetvl_<mode>"
  [(parallel
    [(set (match_operand:X 0 "register_operand" "=r,r")
      (unspec:X
        [(unspec:X
          [(match_operand:X 1 "csr_operand" "K,r")] UNSPEC_VSETVLI)] UNSPEC_VSETVLI))
     (set (reg:SI VL_REGNUM)
      (unspec:SI
        [(unspec:SI
          [(match_dup 1)] UNSPEC_VSETVLI)] UNSPEC_VSETVLI))
     (set (reg:SI VTYPE_REGNUM)
       (unspec:SI
        [(match_operand 2 "const_int_operand")] UNSPEC_VSETVLI))])]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vsetvl (Pmode, operands[0], operands[1], operands[2]));
    DONE;
  }
  [(set_attr "type" "vsetvl")
   (set_attr "mode" "none")])

(define_insn_and_rewrite "*vsetvl_<mode>_2"
  [(parallel
    [(set (match_operand:X 0 "register_operand" "=r,r")
      (unspec:X
        [(unspec:X
          [(match_operand:X 1 "csr_operand" "K,r")] UNSPEC_VSETVLI)] UNSPEC_VSETVLI))
     (set (reg:SI VL_REGNUM)
      (unspec:SI
        [(unspec:SI
          [(match_dup 1)] UNSPEC_VSETVLI)] UNSPEC_VSETVLI))
     (set (reg:SI VTYPE_REGNUM)
       (unspec:SI
        [(match_operand 2 "const_int_operand")] UNSPEC_VSETVLI))
     (set (match_operand:X 3 "register_operand" "=r,r")
       (unspec:X
        [(match_dup 1)] UNSPEC_VSETVLI))])]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vsetvl (Pmode, operands[0], operands[1], operands[2]));
    emit_insn (gen_vsetvl (Pmode, operands[3], operands[1], operands[2]));
    DONE;
  }
  [(set_attr "type" "vsetvl")
   (set_attr "mode" "none")])

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
  [(set (match_operand:<VWLMUL1> 0 "register_operand" "=&vr,&vr")
    (unspec:<VWLMUL1> 
      [(unspec:<VM> 
        [(const_int 0)
         (unspec:<VWLMUL1> 
          [(const_int 0)
           (unspec:<VWLMUL1> 
            [(unspec:<VWLMUL1> 
              [(const_int 0)
               (any_extend:<VWLMUL1> 
                (match_operand:VWREDI 1 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
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
   (clobber (match_scratch:<VWLMUL1> 3 "=&vr,&vr"))]
  "TARGET_VECTOR"
  "vmv.v.i\t%3,0\;vwredsum<u>.vs\t%0,%1,%3"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<VWREDI:MODE>")])

(define_insn "vfwcvt_vfredsum<VWREDF:mode>_to_vfwredusum_<P:mode>"
  [(set (match_operand:<VWLMUL1> 0 "register_operand" "=&vr,&vr")
    (unspec:<VWLMUL1> 
      [(unspec:<VM> 
        [(const_int 0)
         (unspec:<VWLMUL1> 
          [(const_int 0)
           (unspec:<VWLMUL1> 
            [(unspec:<VWLMUL1> 
             [(const_int 0)
              (float_extend:<VWLMUL1> 
                (match_operand:VWREDF 1 "register_operand" "vr,vr"))
              (const_int 0)] UNSPEC_SELECT)
             (match_operand 3 "p_reg_or_const_csr_operand" "r,K")
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
   (clobber (match_scratch:<VWLMUL1> 2 "=&vr,&vr"))]
  "TARGET_VECTOR"
  "vmv.v.i\t%2,0\;vfwredusum.vs\t%0,%1,%2"
  [(set_attr "type" "vwreduc")
   (set_attr "mode" "<VWREDF:MODE>")])

(define_insn "vfwcvt_vfredsum<VWREDF:mode>_to_vfwredosum_<P:mode>"
  [(set (match_operand:<VWLMUL1> 0 "register_operand" "=&vr,&vr")
    (unspec:<VWLMUL1> 
      [(unspec:<VM> 
        [(const_int 0)
         (unspec:<VWLMUL1> 
          [(const_int 0)
           (unspec:<VWLMUL1> 
            [(unspec:<VWLMUL1> 
              [(const_int 0)
               (float_extend:<VWLMUL1> 
                (match_operand:VWREDF 1 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
             (match_operand 5 "const_int_operand")
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
           (unspec:<VWLMUL1> 
             [(unspec:<VWLMUL1> 
               [(vec_duplicate:<VWLMUL1> 
                 (match_operand:<VWSUB> 2 "register_operand" "r,r"))
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
   (clobber (match_scratch:<VWLMUL1> 3 "=&vr,&vr"))]
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

(define_insn_and_rewrite "vle<mode>_vmerge_to_vle<mode>_mask"
  [(set (match_operand:V 0 "register_operand" "=vr,vr")
    (unspec:V 
      [(const_int 0)
       (unspec:V 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:V 2 "register_operand" "vr,vr")
         (unspec:V 
          [(unspec:V 
            [(match_dup 1)
             (unspec:V 
              [(match_operand 3 "pmode_register_operand" "r,r")
               (mem:BLK (scratch))] UNSPEC_UNIT_STRIDE_LOAD)
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
      (match_dup 4)
      (const_int 10)
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vle (<MODE>mode, operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vle")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "vload<mode>_vmerge_to_vle<mode>_mask"
  [(set (match_operand:VFULL 0 "register_operand" "=vr,vr")
    (unspec:VFULL 
      [(const_int 0)
       (unspec:VFULL 
         [(match_operand:<VM> 1 "register_operand" "vm,vm")
          (match_operand:VFULL 2 "register_operand" "vr,vr")
          (match_operand:VFULL 3 "memory_operand" "m,m")] UNSPEC_MERGE)
       (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
       (match_operand 5 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vle (<MODE>mode, operands[0], operands[1], operands[2],
        XEXP (operands[3], 0), operands[4], operands[5]));
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
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr,vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,vr,0,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr")
              (vec_duplicate:VI 
                (match_operand:<VSUB> 4 "register_operand" "r,r,r,r")))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
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
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_2"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr,vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,vr,0,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs:VI
              (vec_duplicate:VI 
                (match_operand:<VSUB> 4 "register_operand" "r,r,r,r"))
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
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
   vmv<lmul>r.v\t%0,%2\;v<rinsn>.vx\t%0,%3,%4,%1.t
   v<rinsn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<rinsn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr,vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm,vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr,0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs_simm5:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr,vr,vr,vr,vr")
              (match_operand:VI 4 "vector_arith_operand" "vr,vi,vr,vi,vr,vi,vr,vi"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,r,r,K,K,K,K")
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
   vmv<lmul>r.v\t%0,%2\;v<insn>.vi\t%0,%3,%v4,%1.t
   v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vi\t%0,%3,%v4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vi\t%0,%3,%v4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "vsub<mode>_vmerge_to_vsub_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr,vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm,vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr,0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (minus:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr,vr,vr,vr,vr")
              (match_operand:VI 4 "vector_neg_arith_operand" "vr,vj,vr,vj,vr,vj,vr,vj"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,r,r,K,K,K,K")
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
   vmv<lmul>r.v\t%0,%2\;vadd.vi\t%0,%3,%v4,%1.t
   vsub.vv\t%0,%3,%4,%1.t
   vadd.vi\t%0,%3,%v4,%1.t
   vmv<lmul>r.v\t%0,%2\;vsub.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vadd.vi\t%0,%3,%v4,%1.t"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "vrsub<mode>_vmerge_to_vrsub_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr,vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm,vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr,0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (minus:VI 
              (match_operand:VI 4 "vector_arith_operand" "vr,vi,vr,vi,vr,vi,vr,vi")
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr,vr,vr,vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,r,r,K,K,K,K")
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
   vmv<lmul>r.v\t%0,%2\;vrsub.vi\t%0,%3,%v4,%1.t
   vsub.vv\t%0,%3,%4,%1.t
   vrsub.vi\t%0,%3,%v4,%1.t
   vmv<lmul>r.v\t%0,%2\;vsub.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vrsub.vi\t%0,%3,%v4,%1.t"
  [(set_attr "type" "varith")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_3"
  [(set (match_operand:VI 0 "register_operand" "=vr,?&vr,vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,vr,0,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (int_binary_vs_reg:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr")
              (match_operand:VI 4 "register_operand" "vr,vr,vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
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
   vmv<lmul>r.v\t%0,%2\;v<insn>.vv\t%0,%3,%4,%1.t
   v<insn>.vv\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vv\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_4"
  [(set (match_operand:V64BITI 0 "register_operand" "=vr,?&vr,vr,?&vr")
    (unspec:V64BITI 
      [(const_int 0)
       (unspec:V64BITI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:V64BITI 2 "register_operand" "0,vr,0,vr")
         (unspec:V64BITI 
          [(unspec:V64BITI 
            [(const_int 0)
             (int_binary_vs:V64BITI 
              (match_operand:V64BITI 3 "register_operand" "vr,vr,vr,vr")
              (vec_duplicate:V64BITI
                (sign_extend:<VSUB>
                  (match_operand:SI 4 "register_operand" "r,r,r,r"))))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
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
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask_5"
  [(set (match_operand:V64BITI 0 "register_operand" "=vr,?&vr,vr,?&vr")
    (unspec:V64BITI 
      [(const_int 0)
       (unspec:V64BITI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:V64BITI 2 "register_operand" "0,vr,0,vr")
         (unspec:V64BITI 
          [(unspec:V64BITI 
            [(const_int 0)
             (int_binary_vs:V64BITI 
              (vec_duplicate:V64BITI
                (sign_extend:<VSUB>
                  (match_operand:SI 4 "register_operand" "r,r,r,r")))
              (match_operand:V64BITI 3 "register_operand" "vr,vr,vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
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
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t
   v<insn>.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;v<insn>.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "v<optab><mode>_vmerge_to_v<optab>_mask"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr,?&vr,?&vr,vr,vr,?&vr,?&vr")
    (unspec:VI 
      [(const_int 0)
       (unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm,vm,vm,vm,vm")
         (match_operand:VI 2 "register_operand" "0,0,vr,vr,0,0,vr,vr")
         (unspec:VI 
          [(unspec:VI 
            [(const_int 0)
             (any_shift:VI 
              (match_operand:VI 3 "register_operand" "vr,vr,vr,vr,vr,vr,vr,vr")
              (match_operand 4 "p_reg_or_uimm5_operand" "r,K,r,K,r,K,r,K"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,r,r,K,K,K,K")
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
   vmv<lmul>r.v\t%0,%2\;v<insn>.vi\t%0,%3,%4,%1.t
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
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr,vr,?&vr")
    (unspec:VF 
      [(const_int 0)
       (unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VF 2 "register_operand" "0,vr,0,vr")
         (unspec:VF 
          [(unspec:VF 
            [(const_int 0)
             (fp_binary_vs:VF 
              (match_operand:VF 3 "register_operand" "vr,vr,vr,vr")
              (vec_duplicate:VF 
                (match_operand:<VSUB> 4 "register_operand" "f,f,f,f")))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
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
   vmv<lmul>r.v\t%0,%2\;vf<insn>.vf\t%0,%3,%4,%1.t
   vf<insn>.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vf<insn>.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])

(define_insn "vf<optab><mode>_vmerge_to_v<optab>_mask_2"
  [(set (match_operand:VF 0 "register_operand" "=vr,?&vr,vr,?&vr")
    (unspec:VF 
      [(const_int 0)
       (unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm,vm,vm")
         (match_operand:VF 2 "register_operand" "0,vr,0,vr")
         (unspec:VF 
          [(unspec:VF 
            [(const_int 0)
             (fp_binary_vs:VF
              (vec_duplicate:VF 
                (match_operand:<VSUB> 4 "register_operand" "f,f,f,f"))
              (match_operand:VF 3 "register_operand" "vr,vr,vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
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
   vmv<lmul>r.v\t%0,%2\;vf<rinsn>.vf\t%0,%3,%4,%1.t
   vf<rinsn>.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vf<rinsn>.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "<rvv_type>")
   (set_attr "mode" "<MODE>")])
   
;; -------------------------------------------------------------------------
;; ---- [INT,FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vsext.vf2
;; - vzext.vf2
;; - vsext.vf4
;; - vzext.vf4
;; - vsext.vf8
;; - vzext.vf8
;; - vfwcvt.f.f.v
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "v<sz>ext<vw>_vf2_vmerge_to_v<sz>ext<vw>_vf2_mask"
  [(set (match_operand:<VW> 0 "register_operand" "=&vr,&vr")
    (unspec:<VW> 
      [(const_int 0)
       (unspec:<VW> 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:<VW> 2 "register_operand" "vr,vr")
         (unspec:<VW> 
          [(unspec:<VW> 
            [(const_int 0)
             (any_extend:<VW> 
              (match_operand:VWI 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_v<sz>ext<vw>_vf2 (operands[0], operands[1], operands[2], operands[3],
            operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<VW>")])

(define_insn_and_rewrite "v<sz>ext<vqw>_vf4_vmerge_to_v<sz>ext<vqw>_vf4_mask"
  [(set (match_operand:<VQW> 0 "register_operand" "=&vr,&vr")
    (unspec:<VQW> 
      [(const_int 0)
       (unspec:<VQW> 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:<VQW> 2 "register_operand" "vr,vr")
         (unspec:<VQW> 
          [(unspec:<VQW> 
            [(const_int 0)
             (any_extend:<VQW> 
              (match_operand:VQWI 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_v<sz>ext<vqw>_vf4 (operands[0], operands[1], operands[2], operands[3],
            operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<VQW>")])

(define_insn_and_rewrite "v<sz>ext<vow>_vf8_vmerge_to_v<sz>ext<vow>_vf8_mask"
  [(set (match_operand:<VOW> 0 "register_operand" "=&vr,&vr")
    (unspec:<VOW> 
      [(const_int 0)
       (unspec:<VOW> 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:<VOW> 2 "register_operand" "vr,vr")
         (unspec:<VOW> 
          [(unspec:<VOW> 
            [(const_int 0)
             (any_extend:<VOW> 
              (match_operand:VOWI 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_v<sz>ext<vow>_vf8 (operands[0], operands[1], operands[2], operands[3],
            operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<VOW>")])

(define_insn_and_rewrite "vfwcvt<vw>_f_f_v_vmerge_to_vfwcvt<vw>_f_f_v_mask"
  [(set (match_operand:<VW> 0 "register_operand" "=&vr,&vr")
    (unspec:<VW> 
      [(const_int 0)
       (unspec:<VW> 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:<VW> 2 "register_operand" "vr,vr")
         (unspec:<VW> 
          [(unspec:<VW> 
            [(const_int 0)
             (float_extend:<VW> 
              (match_operand:VWF 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfwcvt<vw>_f_f_v (operands[0], operands[1], operands[2], operands[3],
            operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vwcvt")
   (set_attr "mode" "<VW>")])

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vncvt.x.x.w
;; - vfncvt.f.f.w
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vncvt<mode>_x_x_w_vmerge_to_vncvt<mode>_x_x_w_mask"
  [(set (match_operand:VWI 0 "register_operand" "=vr,vr")
    (unspec:VWI 
      [(const_int 0)
       (unspec:VWI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VWI 2 "register_operand" "vr,vr")
         (unspec:VWI 
          [(unspec:VWI 
            [(const_int 0)
             (truncate:VWI 
              (match_operand:<VW> 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
          (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
          (match_operand 5 "const_int_operand")
          (reg:SI VL_REGNUM)
          (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vncvt_x_x_w (<MODE>mode, operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vncvt")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "vfncvt<mode>_f_f_w_vmerge_to_vfncvt<mode>_f_f_w_mask"
  [(set (match_operand:VWF 0 "register_operand" "=vr,vr")
    (unspec:VWF 
      [(const_int 0)
       (unspec:VWF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VWF 2 "register_operand" "vr,vr")
         (unspec:VWF 
          [(unspec:VWF 
            [(const_int 0)
             (float_truncate:VWF 
              (match_operand:<VW> 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
          (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
          (match_operand 5 "const_int_operand")
          (reg:SI VL_REGNUM)
          (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfncvt_f_f_w (<MODE>mode, operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vncvt")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [FP<-INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfcvt.f.xu.v
;; - vfcvt.f.x.v
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vfcvt<mode>_f_x<u>_v_vmerge_to_vfcvt<mode>_f_x<u>_v_mask"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(const_int 0)
       (unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VF 2 "register_operand" "vr,vr")
         (unspec:VF 
          [(unspec:VF 
            [(const_int 0)
             (any_float:VF 
              (match_operand:<VMAP> 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfcvt<mode>_f_x<u>_v (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vfcvt")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [INT<-FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfcvt.rtz.xu.f.v
;; - vfcvt.rtz.x.f.v
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vfcvt<vmap>_rtz_x<u>_f_v_vmerge_to_vfcvt<vmap>_rtz_x<u>_f_v_mask"
  [(set (match_operand:<VMAP> 0 "register_operand" "=vr,vr")
    (unspec:<VMAP> 
      [(const_int 0)
       (unspec:<VMAP> 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:<VMAP> 2 "register_operand" "vr,vr")
         (unspec:<VMAP> 
          [(unspec:<VMAP> 
            [(const_int 0)
             (any_fix:<VMAP> 
              (match_operand:VF 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfcvt<vmap>_rtz_x<u>_f_v (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vfcvt")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [FP<-INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfwcvt.f.xu.v
;; - vfwcvt.f.x.v
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vfwcvt<vwfmap>_f_x<u>_v_vmerge_to_vfwcvt<vwfmap>_f_x<u>_v_mask"
  [(set (match_operand:<VWFMAP> 0 "register_operand" "=&vr,&vr")
    (unspec:<VWFMAP> 
      [(const_int 0)
       (unspec:<VWFMAP> 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:<VWFMAP> 2 "register_operand" "vr,vr")
         (unspec:<VWFMAP> 
          [(unspec:<VWFMAP> 
            [(const_int 0)
             (any_float:<VWFMAP> 
              (match_operand:VWI 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfwcvt<vwfmap>_f_x<u>_v (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vfwcvt")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [INT<-FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfwcvt.rtz.xu.f.v
;; - vfwcvt.rtz.x.f.v
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vfwcvt<vwmap>_rtz_x<u>_f_v_vmerge_to_vfwcvt<vwmap>_rtz_x<u>_f_v_mask"
  [(set (match_operand:<VWMAP> 0 "register_operand" "=&vr,&vr")
    (unspec:<VWMAP> 
      [(const_int 0)
       (unspec:<VWMAP> 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:<VWMAP> 2 "register_operand" "vr,vr")
         (unspec:<VWMAP> 
          [(unspec:<VWMAP> 
            [(const_int 0)
             (any_fix:<VWMAP> 
              (match_operand:VWF 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfwcvt<vwmap>_rtz_x<u>_f_v (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vfwcvt")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [FP<-INT] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfncvt.f.xu.v
;; - vfncvt.f.x.v
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vfncvt<mode>_f_x<u>_w_vmerge_to_vfncvt<mode>_f_x<u>_w_mask"
  [(set (match_operand:VWF 0 "register_operand" "=&vr,&vr")
    (unspec:VWF 
      [(const_int 0)
       (unspec:VWF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VWF 2 "register_operand" "vr,vr")
         (unspec:VWF 
          [(unspec:VWF 
            [(const_int 0)
             (any_float:VWF 
              (match_operand:<VWMAP> 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfncvt<mode>_f_x<u>_w (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vfncvt")
   (set_attr "mode" "<MODE>")])
        
;; -------------------------------------------------------------------------
;; ---- [INT<-FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vfncvt.rtz.xu.f.w
;; - vfncvt.rtz.x.f.w
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vfncvt<mode>_rtz_x<u>_f_w_vmerge_to_vfncvt<mode>_rtz_x<u>_f_w_mask"
  [(set (match_operand:VWI 0 "register_operand" "=&vr,&vr")
    (unspec:VWI 
      [(const_int 0)
       (unspec:VWI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (match_operand:VWI 2 "register_operand" "vr,vr")
         (unspec:VWI 
          [(unspec:VWI 
            [(const_int 0)
             (any_fix:VWI 
              (match_operand:<VWFMAP> 3 "register_operand" "vr,vr"))
             (const_int 0)] UNSPEC_SELECT)
           (match_operand 4 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 5 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)] UNSPEC_MERGE)
       (match_dup 4)
       (match_dup 5)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_vfncvt<mode>_rtz_x<u>_f_w (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5]));
    DONE;
  }
  [(set_attr "type" "vfncvt")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vmacc.vx
;; - vnmsac.vx
;; - vmadd.vx
;; - vnmsub.vx
;; - vfmacc.vf
;; - vfnmacc.vf
;; - vfmsac.vf
;; - vfnmsac.vf
;; - vfmadd.vf
;; - vfnmadd.vf
;; - vfmsub.vf
;; - vfnmsub.vf
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "vmul<mode>_vadd<mode>_to_fma<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr")
    (unspec:VI 
      [(unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (plus:VI 
          (unspec:VI 
            [(unspec:VI 
              [(const_int 0)
               (mult:VI 
                (vec_duplicate:VI 
                  (match_operand:<VSUB> 3 "register_operand" "r,r"))
                (match_operand:VI 2 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
             (const_int 10)
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
          (match_operand:VI 4 "register_operand" "vr,vr"))
         (match_operand:VI 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_cond_fma_vs<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand")
        (plus:VI
          (mult:VI
            (match_operand:VI 2 "register_operand")
            (vec_duplicate:VI 
              (match_operand:<VSUB> 3 "register_operand")))
          (match_operand:VI 4 "register_operand"))
        (match_operand:VI 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
{
})

(define_insn "*cond_fma_vs<mode>_2"
  [(set (match_operand:VI 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm, vm,vm, vm")
          (plus:VI
            (mult:VI
              (match_operand:VI 2 "register_operand" "0, vr,0, vr")
              (vec_duplicate:VI 
                (match_operand:<VSUB> 3 "register_operand" "r,r,r,r")))
            (match_operand:VI 4 "register_operand" "vr, vr,vr, vr"))
          (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vmadd.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vmadd.vx\t%0,%3,%4,%1.t
   vmadd.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vmadd.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fma_vs<mode>_4"
  [(set (match_operand:VI 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
        (plus:VI
	        (mult:VI
	          (match_operand:VI 2 "register_operand" "vr, vr, vr, vr")
	          (vec_duplicate:VI 
              (match_operand:<VSUB> 3 "register_operand" "r,r,r,r")))
	        (match_operand:VI 4 "register_operand" "0, vr,0, vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vmacc.vx\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vmacc.vx\t%0,%3,%2,%1.t
   vmacc.vx\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vmacc.vx\t%0,%3,%2,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fma_vs<mode>_any"
  [(set (match_operand:VI 0 "register_operand" "=&vr,&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VI
	        (mult:VI
	          (match_operand:VI 2 "register_operand" "vr,vr")
	          (vec_duplicate:VI 
              (match_operand:<VSUB> 3 "register_operand" "r,r")))
	        (match_operand:VI 4 "register_operand" "vr,vr"))
        (match_operand:VI 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "vfmul<mode>_vfadd<mode>_to_fma<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (plus:VF 
          (unspec:VF 
            [(unspec:VF 
              [(const_int 0)
               (mult:VF 
                (vec_duplicate:VF 
                  (match_operand:<VSUB> 3 "register_operand" "f,f"))
                (match_operand:VF 2 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
             (const_int 10)
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
          (match_operand:VF 4 "register_operand" "vr,vr"))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_cond_fma_vs<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (plus:VF
          (mult:VF
            (match_operand:VF 2 "register_operand")
            (vec_duplicate:VF 
              (match_operand:<VSUB> 3 "register_operand")))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
{
})

(define_insn "*cond_fma_vs<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
          (plus:VF
            (mult:VF
              (match_operand:VF 2 "register_operand" "0, vr, 0, vr")
              (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand" "f,f,f,f")))
            (match_operand:VF 4 "register_operand" "vr, vr, vr, vr"))
          (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfmadd.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfmadd.vf\t%0,%3,%4,%1.t
   vfmadd.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfmadd.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fma_vs<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
        (plus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "vr, vr, vr, vr")
	          (vec_duplicate:VF 
              (match_operand:<VSUB> 3 "register_operand" "f,f,f,f")))
	        (match_operand:VF 4 "register_operand" "0, vr, 0, vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfmacc.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfmacc.vf\t%0,%3,%2,%1.t
   vfmacc.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfmacc.vf\t%0,%3,%2,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fma_vs<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr,&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "vr,vr")
	          (vec_duplicate:VF 
              (match_operand:<VSUB> 3 "register_operand" "f,f")))
	        (match_operand:VF 4 "register_operand" "vr,vr"))
        (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])
   
(define_insn_and_rewrite "vmul<mode>_vsub<mode>_to_fnma<mode>"
  [(set (match_operand:VI 0 "register_operand" "=vr,vr")
    (unspec:VI 
      [(unspec:VI 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (minus:VI 
          (match_operand:VI 4 "register_operand" "vr,vr")
          (unspec:VI 
            [(unspec:VI 
              [(const_int 0)
               (mult:VI 
                (vec_duplicate:VI 
                  (match_operand:<VSUB> 3 "register_operand" "r,r"))
                (match_operand:VI 2 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
             (const_int 10)
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
         (match_operand:VI 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_cond_fnma_vs<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fnma_vs<mode>"
  [(set (match_operand:VI 0 "register_operand")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand")
        (plus:VI
          (neg:VI
            (mult:VI
              (match_operand:VI 2 "register_operand")
              (vec_duplicate:VI 
                (match_operand:<VSUB> 3 "register_operand"))))
          (match_operand:VI 4 "register_operand"))
        (match_operand:VI 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
{
})

(define_insn "*cond_fnma_vs<mode>_2"
  [(set (match_operand:VI 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
          (plus:VI
            (neg:VI
              (mult:VI
                (match_operand:VI 2 "register_operand" "0, vr, 0, vr")
                (vec_duplicate:VI 
                  (match_operand:<VSUB> 3 "register_operand" "r,r,r,r"))))
            (match_operand:VI 4 "register_operand" "vr, vr,vr, vr"))
          (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vnmsub.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vnmsub.vx\t%0,%3,%4,%1.t
   vnmsub.vx\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vnmsub.vx\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fnma_vs<mode>_4"
  [(set (match_operand:VI 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
        (plus:VI
          (neg:VI
	          (mult:VI
	            (match_operand:VI 2 "register_operand" "vr, vr, vr, vr")
	            (vec_duplicate:VI 
                (match_operand:<VSUB> 3 "register_operand" "r,r, r,r"))))
	        (match_operand:VI 4 "register_operand" "0, vr, 0, vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vnmsac.vx\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vnmsac.vx\t%0,%3,%2,%1.t
   vnmsac.vx\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vnmsac.vx\t%0,%3,%2,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fnma_vs<mode>_any"
  [(set (match_operand:VI 0 "register_operand" "=&vr,&vr")
	  (unspec:VI
      [(unspec:VI
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VI
          (neg:VI
	          (mult:VI
	            (match_operand:VI 2 "register_operand" "vr,vr")
	            (vec_duplicate:VI 
                (match_operand:<VSUB> 3 "register_operand" "r,r"))))
	        (match_operand:VI 4 "register_operand" "vr,vr"))
        (match_operand:VI 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "vfmul<mode>_vfsub<mode>_to_fnma<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (minus:VF 
          (match_operand:VF 4 "register_operand" "vr,vr")
          (unspec:VF 
            [(unspec:VF 
              [(const_int 0)
               (mult:VF 
                (vec_duplicate:VF 
                  (match_operand:<VSUB> 3 "register_operand" "f,f"))
                (match_operand:VF 2 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
             (const_int 10)
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_cond_fnma_vs<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fnma_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (plus:VF
          (neg:VF
            (mult:VF
              (match_operand:VF 2 "register_operand")
              (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand"))))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
{
})

(define_insn "*cond_fnma_vs<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
          (plus:VF
            (neg:VF
              (mult:VF
                (match_operand:VF 2 "register_operand" "0, vr, 0, vr")
                (vec_duplicate:VF 
                  (match_operand:<VSUB> 3 "register_operand" "f,f,f,f"))))
            (match_operand:VF 4 "register_operand" "vr, vr, vr, vr"))
          (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfnmsub.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfnmsub.vf\t%0,%3,%4,%1.t
   vfnmsub.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfnmsub.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fnma_vs<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
        (plus:VF
          (neg:VF
	          (mult:VF
	            (match_operand:VF 2 "register_operand" "vr, vr, vr, vr")
	            (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand" "f,f,f,f"))))
	        (match_operand:VF 4 "register_operand" "0, vr, 0, vr"))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfnmsac.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfnmsac.vf\t%0,%3,%2,%1.t
   vfnmsac.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfnmsac.vf\t%0,%3,%2,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fnma_vs<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr,&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
        (plus:VF
          (neg:VF
	          (mult:VF
	            (match_operand:VF 2 "register_operand" "vr,vr")
	            (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand" "f,f"))))
	        (match_operand:VF 4 "register_operand" "vr,vr"))
        (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "vfsub<mode>_vfmul<mode>_to_fms<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (minus:VF 
          (unspec:VF 
            [(unspec:VF 
              [(const_int 0)
               (mult:VF 
                (vec_duplicate:VF 
                  (match_operand:<VSUB> 3 "register_operand" "f,f"))
                (match_operand:VF 2 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
             (const_int 10)
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
          (match_operand:VF 4 "register_operand" "vr,vr"))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_cond_fms_vs<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
         (minus:VF
          (mult:VF
            (match_operand:VF 2 "register_operand")
            (vec_duplicate:VF 
              (match_operand:<VSUB> 3 "register_operand")))
          (match_operand:VF 4 "register_operand"))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
{
})

(define_insn "*cond_fms_vs<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
          (minus:VF
            (mult:VF
              (match_operand:VF 2 "register_operand" "0, vr, 0, vr")
              (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand" "f,f,f,f")))
            (match_operand:VF 4 "register_operand" "vr, vr, vr, vr"))
          (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfmsub.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfmsub.vf\t%0,%3,%4,%1.t
   vfmsub.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfmsub.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fms_vs<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
         (minus:VF
	         (mult:VF
	           (match_operand:VF 2 "register_operand" "vr, vr, vr, vr")
	           (vec_duplicate:VF 
               (match_operand:<VSUB> 3 "register_operand" "f,f,f,f")))
	         (match_operand:VF 4 "register_operand" "0, vr, 0, vr"))
         (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfmsac.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfmsac.vf\t%0,%3,%2,%1.t
   vfmsac.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfmsac.vf\t%0,%3,%2,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fms_vs<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr,&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (minus:VF
	        (mult:VF
	          (match_operand:VF 2 "register_operand" "vr,vr")
	          (vec_duplicate:VF 
              (match_operand:<VSUB> 3 "register_operand" "f,f")))
	         (match_operand:VF 4 "register_operand" "vr,vr"))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])
   
(define_insn_and_rewrite "neg<mode>_fma<mode>_to_fnms<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (neg:VF 
          (unspec:VF 
            [(plus:VF 
              (mult:VF 
                (vec_duplicate:VF 
                 (match_operand:<VSUB> 3 "register_operand" "f,f"))
                (match_operand:VF 2 "register_operand" "vr,vr"))
              (match_operand:VF 4 "register_operand" "vr,vr"))
           (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
           (match_operand 7 "const_int_operand")
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_dup 7)
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_cond_fnms_vs<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "neg<mode>_fma<mode>_to_fnms<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (neg:VF 
          (unspec:VF 
            [(plus:VF 
              (mult:VF 
                (vec_duplicate:VF 
                 (match_operand:<VSUB> 3 "register_operand" "f,f"))
                (match_operand:VF 2 "register_operand" "vr,vr"))
              (match_operand:VF 4 "register_operand" "vr,vr"))
           (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
           (const_int 10)
           (reg:SI VL_REGNUM)
           (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_cond_fnms_vs<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6], operands[7]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_expand "cond_fnms_vs<mode>"
  [(set (match_operand:VF 0 "register_operand")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand")
        (neg:VF
          (plus:VF
            (mult:VF
              (match_operand:VF 2 "register_operand")
              (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand")))
            (match_operand:VF 4 "register_operand")))
        (match_operand:VF 5 "register_operand")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
{
})

(define_insn "*cond_fnms_vs<mode>_2"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
          (neg:VF
            (plus:VF
              (mult:VF
                (match_operand:VF 2 "register_operand" "0, vr, 0, vr")
                (vec_duplicate:VF 
                  (match_operand:<VSUB> 3 "register_operand" "f,f,f,f")))
              (match_operand:VF 4 "register_operand" "vr, vr, vr, vr")))
          (match_dup 2)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfnmadd.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfnmadd.vf\t%0,%3,%4,%1.t
   vfnmadd.vf\t%0,%3,%4,%1.t
   vmv<lmul>r.v\t%0,%2\;vfnmadd.vf\t%0,%3,%4,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn "*cond_fnms_vs<mode>_4"
  [(set (match_operand:VF 0 "register_operand" "=vr, ?&vr, vr, ?&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm, vm, vm, vm")
         (neg:VF
          (plus:VF
	          (mult:VF
	            (match_operand:VF 2 "register_operand" "vr, vr, vr, vr")
	            (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand" "f,f, f,f")))
	          (match_operand:VF 4 "register_operand" "0, vr, 0, vr")))
        (match_dup 4)] UNSPEC_SELECT)
      (match_operand 5 "p_reg_or_const_csr_operand" "r,r,K,K")
      (match_operand 6 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV"
  "@
   vfnmacc.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfnmacc.vf\t%0,%3,%2,%1.t
   vfnmacc.vf\t%0,%3,%2,%1.t
   vmv<lmul>r.v\t%0,%4\;vfnmacc.vf\t%0,%3,%2,%1.t"
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "*cond_fnms_vs<mode>_any"
  [(set (match_operand:VF 0 "register_operand" "=&vr,&vr")
	  (unspec:VF
      [(unspec:VF
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (neg:VF
          (plus:VF
	          (mult:VF
	            (match_operand:VF 2 "register_operand" "vr,vr")
	            (vec_duplicate:VF 
                (match_operand:<VSUB> 3 "register_operand" "f,f")))
	          (match_operand:VF 4 "register_operand" "vr,vr")))
        (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
      (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
      (match_operand 7 "const_int_operand")
      (reg:SI VL_REGNUM)
      (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR && TARGET_RVV
   && !rtx_equal_p (operands[2], operands[5])
   && !rtx_equal_p (operands[4], operands[5])"
  "#"
  "&& reload_completed"
  {
    emit_insn (gen_vcond_mask_<mode><vm> (operands[0], operands[4],
					     operands[5], operands[1]));
    operands[5] = operands[4] = operands[0];
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

;; -------------------------------------------------------------------------
;; ---- [INT,FP] Canonicalization of Instructions
;; -------------------------------------------------------------------------
;; Includes:
;; - vmacc.vv
;; - vnmsac.vv
;; - vmadd.vv
;; - vnmsub.vv
;; - vfmacc.vv
;; - vfnmacc.vv
;; - vfmsac.vv
;; - vfnmsac.vv
;; - vfmadd.vv
;; - vfnmadd.vv
;; - vfmsub.vv
;; - vfnmsub.vv
;; -------------------------------------------------------------------------

(define_insn_and_rewrite "mult<mode>_add<mode>_to_fma<mode>"
  [(set (match_operand:V 0 "register_operand" "=vr,vr")
    (unspec:V 
      [(unspec:V 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (plus:V 
          (unspec:V 
           [(unspec:V 
             [(const_int 0)
              (mult:V 
               (match_operand:V 2 "register_operand" "vr,vr")
               (match_operand:V 3 "register_operand" "vr,vr"))
              (const_int 0)] UNSPEC_SELECT)
            (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
            (const_int 10)
            (reg:SI VL_REGNUM)
            (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
          (match_operand:V 4 "register_operand" "vr,vr"))
         (match_operand:V 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_len_cond_fma<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "mult<mode>_sub<mode>_to_fms<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (minus:VF 
          (unspec:VF 
           [(unspec:VF 
             [(const_int 0)
              (mult:VF 
               (match_operand:VF 2 "register_operand" "vr,vr")
               (match_operand:VF 3 "register_operand" "vr,vr"))
              (const_int 0)] UNSPEC_SELECT)
            (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
            (const_int 10)
            (reg:SI VL_REGNUM)
            (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
          (match_operand:VF 4 "register_operand" "vr,vr"))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_len_cond_fms<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "sub<mode>_mult<mode>_to_fnma<mode>"
  [(set (match_operand:V 0 "register_operand" "=vr,vr")
    (unspec:V 
      [(unspec:V 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (minus:V 
          (match_operand:V 4 "register_operand" "vr,vr")
          (unspec:V 
            [(unspec:V 
              [(const_int 0)
               (mult:V 
                (match_operand:V 2 "register_operand" "vr,vr")
                (match_operand:V 3 "register_operand" "vr,vr"))
               (const_int 0)] UNSPEC_SELECT)
             (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
             (const_int 10)
             (reg:SI VL_REGNUM)
             (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
         (match_operand:V 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_len_cond_fnma<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])

(define_insn_and_rewrite "mult<mode>_neg<mode>_sub<mode>_to_fnms<mode>"
  [(set (match_operand:VF 0 "register_operand" "=vr,vr")
    (unspec:VF 
      [(unspec:VF 
        [(match_operand:<VM> 1 "register_operand" "vm,vm")
         (minus:VF 
          (unspec:VF 
           [(unspec:VF 
             [(const_int 0)
              (neg:VF 
               (unspec:VF 
                [(unspec:VF 
                  [(const_int 0)
                   (mult:VF 
                    (match_operand:VF 2 "register_operand" "vr,vr")
                    (match_operand:VF 3 "register_operand" "vr,vr"))
                   (const_int 0)] UNSPEC_SELECT)
                 (match_operand 6 "p_reg_or_const_csr_operand" "r,K")
                 (const_int 10)
                 (reg:SI VL_REGNUM)
                 (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))
              (const_int 0)] UNSPEC_SELECT)
            (match_dup 6)
            (const_int 10)
            (reg:SI VL_REGNUM)
            (reg:SI VTYPE_REGNUM)] UNSPEC_RVV)
          (match_operand:VF 4 "register_operand" "vr,vr"))
         (match_operand:VF 5 "register_operand" "vr,vr")] UNSPEC_SELECT)
       (match_dup 6)
       (match_operand 7 "const_int_operand")
       (reg:SI VL_REGNUM)
       (reg:SI VTYPE_REGNUM)] UNSPEC_RVV))]
  "TARGET_VECTOR"
  "#"
  "&& 1"
  {
    emit_insn (gen_len_cond_fnms<mode> (operands[0], operands[1], operands[2],
        operands[3], operands[4], operands[5], operands[6]));
    DONE;
  }
  [(set_attr "type" "vmadd")
   (set_attr "mode" "<MODE>")])