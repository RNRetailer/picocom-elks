/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc-ia16/gcc/config/ia16/ia16.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, machine_mode);
extern int address_operand (rtx, machine_mode);
extern int register_operand (rtx, machine_mode);
extern int pmode_register_operand (rtx, machine_mode);
extern int scratch_operand (rtx, machine_mode);
extern int immediate_operand (rtx, machine_mode);
extern int const_int_operand (rtx, machine_mode);
extern int const_double_operand (rtx, machine_mode);
extern int nonimmediate_operand (rtx, machine_mode);
extern int nonmemory_operand (rtx, machine_mode);
extern int push_operand (rtx, machine_mode);
extern int pop_operand (rtx, machine_mode);
extern int memory_operand (rtx, machine_mode);
extern int indirect_operand (rtx, machine_mode);
extern int ordered_comparison_operator (rtx, machine_mode);
extern int comparison_operator (rtx, machine_mode);
extern int nonregister_operand (rtx, machine_mode);
extern int general_or_concat_operand (rtx, machine_mode);
extern int single_register_operand (rtx, machine_mode);
extern int single_nonmemory_operand (rtx, machine_mode);
extern int nonimmediate_or_0_operand (rtx, machine_mode);
extern int segment_register_operand (rtx, machine_mode);
extern int nonsegment_register_operand (rtx, machine_mode);
extern int accumulator_register_operand (rtx, machine_mode);
extern int no_sp_operand (rtx, machine_mode);
extern int no_sp_nonimmediate_operand (rtx, machine_mode);
extern int nonimmediate_nonsegment_operand (rtx, machine_mode);
extern int xlat_memory_operand (rtx, machine_mode);
extern int carry_flag_operator (rtx, machine_mode);
extern int carry_not_flag_operator (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_a,
  CONSTRAINT_b,
  CONSTRAINT_c,
  CONSTRAINT_d,
  CONSTRAINT_S,
  CONSTRAINT_D,
  CONSTRAINT_Rbp,
  CONSTRAINT_e,
  CONSTRAINT_Rds,
  CONSTRAINT_Ral,
  CONSTRAINT_Rah,
  CONSTRAINT_Rcl,
  CONSTRAINT_Rdl,
  CONSTRAINT_Rdh,
  CONSTRAINT_T,
  CONSTRAINT_q,
  CONSTRAINT_l,
  CONSTRAINT_u,
  CONSTRAINT_B,
  CONSTRAINT_w,
  CONSTRAINT_x,
  CONSTRAINT_A,
  CONSTRAINT_j,
  CONSTRAINT_Q,
  CONSTRAINT_k,
  CONSTRAINT_P1,
  CONSTRAINT_M1,
  CONSTRAINT_Lbm,
  CONSTRAINT_Lor,
  CONSTRAINT_Lom,
  CONSTRAINT_Lar,
  CONSTRAINT_Lam,
  CONSTRAINT_Ish,
  CONSTRAINT_Iaa,
  CONSTRAINT_Ipu,
  CONSTRAINT_Imu,
  CONSTRAINT_I11,
  CONSTRAINT_Ifa,
  CONSTRAINT_N,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_p,
  CONSTRAINT_Z,
  CONSTRAINT_Um,
  CONSTRAINT_Uo,
  CONSTRAINT_Ua,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_P1;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_k;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_o;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_Z && c <= CONSTRAINT_Ua)
    return;
  if (c >= CONSTRAINT_V && c <= CONSTRAINT__g)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'I': return 3;
    case 'L': return 3;
    case 'M': return 2;
    case 'P': return 2;
    case 'R': return 3;
    case 'U': return 2;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_Z)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_P1)
    return CT_CONST_INT;
  return CT_REGISTER;
}
#endif /* tm-preds.h */
