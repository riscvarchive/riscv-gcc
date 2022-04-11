/* Cost model definitions for RISC-V 'V' Extension for GNU compiler.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifndef GCC_RISCV_VECTOR_COST_H
#define GCC_RISCV_VECTOR_COST_H

enum vector_tune_type {
  VECTOR_TUNE_GENERIC,
};

struct vector_insn_scale_table {
  const int load;
  const int store;
  const int alu;
  const int mult;
  const int mov;
  const int dup;
  const int extract;
  const int if_then_else;
};

struct vector_stmt_scale_table {
  const int scalar_int_stmt_cost;       /* Cost of any int scalar operation,
                                         excluding load and store.  */
  const int scalar_fp_stmt_cost;        /* Cost of any fp scalar operation,
                                         excluding load and store.  */
  const int scalar_load_cost;           /* Cost of scalar load.  */
  const int scalar_store_cost;          /* Cost of scalar store.  */
  const int vec_int_stmt_cost;          /* Cost of any int vector operation,
                                         excluding load, store, permute,
                                         vector-to-scalar and
                                         scalar-to-vector operation.  */
  const int vec_fp_stmt_cost;           /* Cost of any fp vector operation,
                                         excluding load, store, permute,
                                         vector-to-scalar and
                                         scalar-to-vector operation.  */
  const int vec_permute_cost;           /* Cost of permute operation.  */
  const int vec_to_scalar_cost;         /* Cost of vec-to-scalar operation.  */
  const int scalar_to_vec_cost;         /* Cost of scalar-to-vector
                                         operation.  */
  const int vec_align_load_cost;        /* Cost of aligned vector load.  */
  const int vec_unalign_load_cost;      /* Cost of unaligned vector load.  */
  const int vec_unalign_store_cost;     /* Cost of unaligned vector store.  */
  const int vec_store_cost;             /* Cost of vector store.  */
  const int cond_taken_branch_cost;     /* Cost of taken branch.  */
  const int cond_not_taken_branch_cost; /* Cost of not taken branch.  */
};

/* Information about vector code that we're in the process of costing.  */
class riscv_vector_costs : public vector_costs {
public:
  riscv_vector_costs(vec_info *, bool);

  unsigned int add_stmt_cost(int count, vect_cost_for_stmt kind,
                             stmt_vec_info stmt_info, tree vectype,
                             int misalign,
                             vect_cost_model_location where) override;
  void finish_cost(const vector_costs *) override;
  bool better_main_loop_than_p(const vector_costs *other) const override;
};

template <typename T> class vector_insn_cost {
public:
  vector_insn_cost(const T *_scale_table) : m_scale_table(_scale_table) {}
  ~vector_insn_cost() {}

  virtual int scale(RTX_CODE) const { return 1; }

  virtual unsigned cost(rtx x, machine_mode mode) const {
    return riscv_classify_nf(mode) * riscv_vlmul_regsize(mode) *
           scale(x == NULL_RTX ? UNKNOWN : GET_CODE(x));
  }

protected:
  const T *m_scale_table;
};

template <typename T> class vector_cost_table {
public:
  vector_cost_table(const T *) {}
  ~vector_cost_table() {}

  virtual bool get_cost(rtx, machine_mode, int *, bool) const { return 1; }
};

class vector_alu_cost : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override { return m_scale_table->alu; }
};

class vector_load_cost : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override { return m_scale_table->load; }
};

class vector_store_cost : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override { return m_scale_table->store; }
};

class vector_mult_cost : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override { return m_scale_table->mult; }
};

class vector_mov_cost : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override { return m_scale_table->mov; }
};

class vector_dup_cost : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override { return m_scale_table->dup; }
};

class vector_extract_cost : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override { return m_scale_table->extract; }
};

class vector_if_then_else_cost
    : public vector_insn_cost<vector_insn_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->if_then_else;
  }
};

class vector_insn_cost_table
    : public vector_cost_table<vector_insn_scale_table> {
public:
  vector_insn_cost_table(const vector_insn_scale_table *_scale_table)
      : vector_cost_table(_scale_table) {
    load = new vector_load_cost(_scale_table);
    store = new vector_store_cost(_scale_table);
    alu = new vector_alu_cost(_scale_table);
    mult = new vector_mult_cost(_scale_table);
    mov = new vector_mov_cost(_scale_table);
    dup = new vector_dup_cost(_scale_table);
    extract = new vector_extract_cost(_scale_table);
    if_then_else = new vector_if_then_else_cost(_scale_table);
  }

  bool get_cost(rtx, machine_mode, int *, bool) const override;

public:
  const vector_insn_cost<vector_insn_scale_table> *load;
  const vector_insn_cost<vector_insn_scale_table> *store;
  const vector_insn_cost<vector_insn_scale_table> *alu;
  const vector_insn_cost<vector_insn_scale_table> *mult;
  const vector_insn_cost<vector_insn_scale_table> *mov;
  const vector_insn_cost<vector_insn_scale_table> *dup;
  const vector_insn_cost<vector_insn_scale_table> *extract;
  const vector_insn_cost<vector_insn_scale_table> *if_then_else;
};

// ==================== vector stmt cost=========================
class vector_scalar_int_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->scalar_int_stmt_cost;
  }
};

class vector_scalar_fp_cost : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->scalar_fp_stmt_cost;
  }
};

class vector_scalar_load_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->scalar_load_cost;
  }
};

class vector_scalar_store_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->scalar_store_cost;
  }
};

class vector_vec_int_cost : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_int_stmt_cost;
  }
};

class vector_vec_fp_cost : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_fp_stmt_cost;
  }
};

class vector_vec_permute_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_permute_cost;
  }
};

class vector_vec_to_scalar_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_to_scalar_cost;
  }
};

class vector_scalar_to_vec_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->scalar_to_vec_cost;
  }
};

class vector_vec_align_load_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_align_load_cost;
  }
};

class vector_vec_unalign_load_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_unalign_load_cost;
  }
};

class vector_vec_unalign_store_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_unalign_store_cost;
  }
};

class vector_vec_store_cost : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->vec_store_cost;
  }
};

class vector_cond_taken_branch_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->cond_taken_branch_cost;
  }
};

class vector_cond_not_taken_branch_cost
    : public vector_insn_cost<vector_stmt_scale_table> {
public:
  // use the same construction function as the vector_insn_cost
  using vector_insn_cost::vector_insn_cost;

  int scale(RTX_CODE) const override {
    return m_scale_table->cond_not_taken_branch_cost;
  }
};

class vector_stmt_cost_table
    : public vector_cost_table<vector_stmt_scale_table> {
public:
  vector_stmt_cost_table(const vector_stmt_scale_table *_scale_table)
      : vector_cost_table(_scale_table) {
    scalar_int = new vector_scalar_int_cost(_scale_table);
    scalar_fp = new vector_scalar_fp_cost(_scale_table);
    scalar_load = new vector_scalar_load_cost(_scale_table);
    scalar_store = new vector_scalar_store_cost(_scale_table);
    vec_int = new vector_vec_int_cost(_scale_table);
    vec_fp = new vector_vec_fp_cost(_scale_table);
    vec_permute = new vector_vec_permute_cost(_scale_table);
    vec_to_scalar = new vector_vec_to_scalar_cost(_scale_table);
    scalar_to_vec = new vector_scalar_to_vec_cost(_scale_table);
    vec_align_load = new vector_vec_align_load_cost(_scale_table);
    vec_unalign_load = new vector_vec_unalign_load_cost(_scale_table);
    vec_unalign_store = new vector_vec_unalign_store_cost(_scale_table);
    vec_store = new vector_vec_store_cost(_scale_table);
    cond_taken_branch = new vector_cond_taken_branch_cost(_scale_table);
    cond_not_taken_branch = new vector_cond_not_taken_branch_cost(_scale_table);
  }

public:
  const vector_insn_cost<vector_stmt_scale_table> *scalar_int;
  const vector_insn_cost<vector_stmt_scale_table> *scalar_fp;
  const vector_insn_cost<vector_stmt_scale_table> *scalar_load;
  const vector_insn_cost<vector_stmt_scale_table> *scalar_store;
  const vector_insn_cost<vector_stmt_scale_table> *vec_int;
  const vector_insn_cost<vector_stmt_scale_table> *vec_fp;
  const vector_insn_cost<vector_stmt_scale_table> *vec_permute;
  const vector_insn_cost<vector_stmt_scale_table> *vec_to_scalar;
  const vector_insn_cost<vector_stmt_scale_table> *scalar_to_vec;
  const vector_insn_cost<vector_stmt_scale_table> *vec_align_load;
  const vector_insn_cost<vector_stmt_scale_table> *vec_unalign_load;
  const vector_insn_cost<vector_stmt_scale_table> *vec_unalign_store;
  const vector_insn_cost<vector_stmt_scale_table> *vec_store;
  const vector_insn_cost<vector_stmt_scale_table> *cond_taken_branch;
  const vector_insn_cost<vector_stmt_scale_table> *cond_not_taken_branch;
};

#endif // GCC_RISCV_VECTOR_COST_H
