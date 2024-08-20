/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE__movphi_ds_ss_slow 1
#define HAVE__movhi_ds_ss_slow 1
#define HAVE__pushphi1_nonimm (!TARGET_PUSH_IMM)
#define HAVE__pushhi1_nonimm (!TARGET_PUSH_IMM)
#define HAVE__pushv2qi1_nonimm (!TARGET_PUSH_IMM)
#define HAVE__pophi1_hicc 1
#define HAVE__popphi1 1
#define HAVE__pophi1 1
#define HAVE__xchgphi2 (!MEM_P (operands[0]) || !MEM_P (operands[1]))
#define HAVE__xchghi2 (!MEM_P (operands[0]) || !MEM_P (operands[1]))
#define HAVE__xchgqi2 (!MEM_P (operands[0]) || !MEM_P (operands[1]))
#define HAVE__xchgv2qi2 (!MEM_P (operands[0]) || !MEM_P (operands[1]))
#define HAVE__addhi3_cc_for_carry (ia16_arith_operands_p (PLUS, operands))
#define HAVE__addqi3_cc_for_carry (ia16_arith_operands_p (PLUS, operands))
#define HAVE__addhi3_carry (ia16_arith_operands_p (PLUS, operands))
#define HAVE__addqi3_carry (ia16_arith_operands_p (PLUS, operands))
#define HAVE__addhi3_carry_cc_for_carry (ia16_arith_operands_p (PLUS, operands))
#define HAVE__addqi3_carry_cc_for_carry (ia16_arith_operands_p (PLUS, operands))
#define HAVE__subhi3_cc_for_carry (ia16_arith_operands_p (MINUS, operands))
#define HAVE__subqi3_cc_for_carry (ia16_arith_operands_p (MINUS, operands))
#define HAVE__subhi3_carry (ia16_arith_operands_p (MINUS, operands))
#define HAVE__subqi3_carry (ia16_arith_operands_p (MINUS, operands))
#define HAVE__subhi3_carry_cc_for_carry (ia16_arith_operands_p (MINUS, operands))
#define HAVE__subqi3_carry_cc_for_carry (ia16_arith_operands_p (MINUS, operands))
#define HAVE__ashlhi_const1_cc_for_carry 1
#define HAVE__ashlqi_const1_cc_for_carry 1
#define HAVE__ashlhi_const1_carry 1
#define HAVE__ashlqi_const1_carry 1
#define HAVE__ashlhi_const1_carry_cc_for_carry 1
#define HAVE__ashlqi_const1_carry_cc_for_carry 1
#define HAVE__ashrhi_const1_cc_for_carry 1
#define HAVE__lshrhi_const1_cc_for_carry 1
#define HAVE__ashrqi_const1_cc_for_carry 1
#define HAVE__lshrqi_const1_cc_for_carry 1
#define HAVE__lshrhi_const1_carry 1
#define HAVE__lshrqi_const1_carry 1
#define HAVE__lshrhi_const1_carry_cc_for_carry 1
#define HAVE__lshrqi_const1_carry_cc_for_carry 1
#define HAVE_mulqi3 1
#define HAVE_mulqihi3 1
#define HAVE_umulqihi3 1
#define HAVE_divmodhi4 1
#define HAVE_divmodqi4 1
#define HAVE_udivmodhi4 1
#define HAVE_udivmodqi4 1
#define HAVE_jump 1
#define HAVE_nop 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_decrement_and_branch_until_zero (TARGET_SHORT_JUMPS)
#define HAVE__enter (TARGET_ENTER_LEAVE)
#define HAVE__leave (TARGET_ENTER_LEAVE)
#define HAVE__simple_return_with_pops (reload_completed)
#define HAVE_sync_lock_test_and_sethi 1
#define HAVE_sync_lock_test_and_setqi 1
#define HAVE_trunchiphi2 1
#define HAVE_extendphihi2 1
#define HAVE_zero_extendphihi2 1
#define HAVE_movphi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movv2qi 1
#define HAVE_movstrictqi 1
#define HAVE_pushphi1 1
#define HAVE_pushhi1 1
#define HAVE_pushv2qi1 1
#define HAVE__pushhi1_prologue 1
#define HAVE__pushhi1_hicc_prologue 1
#define HAVE_pushsi1 1
#define HAVE_pushdi1 1
#define HAVE_pushti1 1
#define HAVE_pushsf1 1
#define HAVE_pushdf1 1
#define HAVE_pushsd1 1
#define HAVE_pushdd1 1
#define HAVE_pushtd1 1
#define HAVE_pushsc1 1
#define HAVE_pushdc1 1
#define HAVE_pushchi1 1
#define HAVE_pushcsi1 1
#define HAVE_pushcdi1 1
#define HAVE_pushcti1 1
#define HAVE_pushqi1 1
#define HAVE_addhi3 1
#define HAVE_subhi3 1
#define HAVE_andhi3 1
#define HAVE_iorhi3 1
#define HAVE_xorhi3 1
#define HAVE_addqi3 1
#define HAVE_subqi3 1
#define HAVE_andqi3 1
#define HAVE_iorqi3 1
#define HAVE_xorqi3 1
#define HAVE_andv2qi3 1
#define HAVE_iorv2qi3 1
#define HAVE_xorv2qi3 1
#define HAVE_addsi3 1
#define HAVE_subsi3 1
#define HAVE_adddi3 1
#define HAVE_subdi3 1
#define HAVE_addti3 1
#define HAVE_subti3 1
#define HAVE_ashlsi3 1
#define HAVE_ashldi3 1
#define HAVE_ashlti3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashrdi3 1
#define HAVE_lshrdi3 1
#define HAVE_ashrti3 1
#define HAVE_lshrti3 1
#define HAVE_vec_shl_v2qi 1
#define HAVE_vec_shr_v2qi 1
#define HAVE_mulhi3 1
#define HAVE_mulhisi3 1
#define HAVE_umulhisi3 1
#define HAVE_ashrhi3 1
#define HAVE_ashrqi3 1
#define HAVE_ashlhi3 1
#define HAVE__ashrhi3 1
#define HAVE_lshrhi3 1
#define HAVE_rotlhi3 1
#define HAVE_rotrhi3 1
#define HAVE_ashlqi3 1
#define HAVE__ashrqi3 1
#define HAVE_lshrqi3 1
#define HAVE_rotlqi3 1
#define HAVE_rotrqi3 1
#define HAVE_one_cmplphi2 1
#define HAVE_one_cmplhi2 1
#define HAVE_one_cmplqi2 1
#define HAVE_one_cmplv2qi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqihi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_cstorehi4 (flag_if_conversion)
#define HAVE_cstoreqi4 (flag_if_conversion)
#define HAVE__scond 1
#define HAVE__scond_scratch 1
#define HAVE_parityhi2 1
#define HAVE_parityqi2 1
#define HAVE_movmemhi (! fixed_regs[DS_REG])
#define HAVE_setmemhi 1
#define HAVE_cbranchhi4 1
#define HAVE_cbranchqi4 1
#define HAVE_call 1
#define HAVE_call_pop 1
#define HAVE_sibcall 1
#define HAVE_call_value 1
#define HAVE_call_value_pop 1
#define HAVE_sibcall_value 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_simple_return (reload_completed)
#define HAVE_seg_override_prot_mode 1
#define HAVE_seg_override 1
#define HAVE_seg16_reloc_prot_mode 1
#define HAVE_seg16_reloc 1
#define HAVE_static_far_ptr 1
#define HAVE__pushphi1_prologue 1
extern rtx        gen__movphi_ds_ss_slow                (void);
extern rtx        gen__movhi_ds_ss_slow                 (void);
extern rtx        gen__pushphi1_nonimm                  (rtx);
extern rtx        gen__pushhi1_nonimm                   (rtx);
extern rtx        gen__pushv2qi1_nonimm                 (rtx);
extern rtx        gen__pophi1_hicc                      (void);
extern rtx        gen__popphi1                          (rtx);
extern rtx        gen__pophi1                           (rtx);
extern rtx        gen__xchgphi2                         (rtx, rtx);
extern rtx        gen__xchghi2                          (rtx, rtx);
extern rtx        gen__xchgqi2                          (rtx, rtx);
extern rtx        gen__xchgv2qi2                        (rtx, rtx);
extern rtx        gen__addhi3_cc_for_carry              (rtx, rtx, rtx);
extern rtx        gen__addqi3_cc_for_carry              (rtx, rtx, rtx);
extern rtx        gen__addhi3_carry                     (rtx, rtx, rtx, rtx);
extern rtx        gen__addqi3_carry                     (rtx, rtx, rtx, rtx);
extern rtx        gen__addhi3_carry_cc_for_carry        (rtx, rtx, rtx, rtx);
extern rtx        gen__addqi3_carry_cc_for_carry        (rtx, rtx, rtx, rtx);
extern rtx        gen__subhi3_cc_for_carry              (rtx, rtx, rtx);
extern rtx        gen__subqi3_cc_for_carry              (rtx, rtx, rtx);
extern rtx        gen__subhi3_carry                     (rtx, rtx, rtx, rtx);
extern rtx        gen__subqi3_carry                     (rtx, rtx, rtx, rtx);
extern rtx        gen__subhi3_carry_cc_for_carry        (rtx, rtx, rtx, rtx);
extern rtx        gen__subqi3_carry_cc_for_carry        (rtx, rtx, rtx, rtx);
extern rtx        gen__ashlhi_const1_cc_for_carry       (rtx, rtx);
extern rtx        gen__ashlqi_const1_cc_for_carry       (rtx, rtx);
extern rtx        gen__ashlhi_const1_carry              (rtx, rtx, rtx);
extern rtx        gen__ashlqi_const1_carry              (rtx, rtx, rtx);
extern rtx        gen__ashlhi_const1_carry_cc_for_carry (rtx, rtx, rtx);
extern rtx        gen__ashlqi_const1_carry_cc_for_carry (rtx, rtx, rtx);
extern rtx        gen__ashrhi_const1_cc_for_carry       (rtx, rtx);
extern rtx        gen__lshrhi_const1_cc_for_carry       (rtx, rtx);
extern rtx        gen__ashrqi_const1_cc_for_carry       (rtx, rtx);
extern rtx        gen__lshrqi_const1_cc_for_carry       (rtx, rtx);
extern rtx        gen__lshrhi_const1_carry              (rtx, rtx, rtx);
extern rtx        gen__lshrqi_const1_carry              (rtx, rtx, rtx);
extern rtx        gen__lshrhi_const1_carry_cc_for_carry (rtx, rtx, rtx);
extern rtx        gen__lshrqi_const1_carry_cc_for_carry (rtx, rtx, rtx);
extern rtx        gen_mulqi3                            (rtx, rtx, rtx);
extern rtx        gen_mulqihi3                          (rtx, rtx, rtx);
extern rtx        gen_umulqihi3                         (rtx, rtx, rtx);
extern rtx        gen_divmodhi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodqi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodhi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodqi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_jump                              (rtx);
extern rtx        gen_nop                               (void);
extern rtx        gen_indirect_jump                     (rtx);
extern rtx        gen_tablejump                         (rtx, rtx);
extern rtx        gen_decrement_and_branch_until_zero   (rtx, rtx);
extern rtx        gen__enter                            (rtx);
extern rtx        gen__leave                            (void);
extern rtx        gen__simple_return_with_pops          (rtx);
extern rtx        gen_sync_lock_test_and_sethi          (rtx, rtx, rtx);
extern rtx        gen_sync_lock_test_and_setqi          (rtx, rtx, rtx);
extern rtx        gen_trunchiphi2                       (rtx, rtx);
extern rtx        gen_extendphihi2                      (rtx, rtx);
extern rtx        gen_zero_extendphihi2                 (rtx, rtx);
extern rtx        gen_movphi                            (rtx, rtx);
extern rtx        gen_movhi                             (rtx, rtx);
extern rtx        gen_movqi                             (rtx, rtx);
extern rtx        gen_movv2qi                           (rtx, rtx);
extern rtx        gen_movstrictqi                       (rtx, rtx);
extern rtx        gen_pushphi1                          (rtx);
extern rtx        gen_pushhi1                           (rtx);
extern rtx        gen_pushv2qi1                         (rtx);
extern rtx        gen__pushhi1_prologue                 (rtx);
extern rtx        gen__pushhi1_hicc_prologue            (void);
extern rtx        gen_pushsi1                           (rtx);
extern rtx        gen_pushdi1                           (rtx);
extern rtx        gen_pushti1                           (rtx);
extern rtx        gen_pushsf1                           (rtx);
extern rtx        gen_pushdf1                           (rtx);
extern rtx        gen_pushsd1                           (rtx);
extern rtx        gen_pushdd1                           (rtx);
extern rtx        gen_pushtd1                           (rtx);
extern rtx        gen_pushsc1                           (rtx);
extern rtx        gen_pushdc1                           (rtx);
extern rtx        gen_pushchi1                          (rtx);
extern rtx        gen_pushcsi1                          (rtx);
extern rtx        gen_pushcdi1                          (rtx);
extern rtx        gen_pushcti1                          (rtx);
extern rtx        gen_pushqi1                           (rtx);
extern rtx        gen_addhi3                            (rtx, rtx, rtx);
extern rtx        gen_subhi3                            (rtx, rtx, rtx);
extern rtx        gen_andhi3                            (rtx, rtx, rtx);
extern rtx        gen_iorhi3                            (rtx, rtx, rtx);
extern rtx        gen_xorhi3                            (rtx, rtx, rtx);
extern rtx        gen_addqi3                            (rtx, rtx, rtx);
extern rtx        gen_subqi3                            (rtx, rtx, rtx);
extern rtx        gen_andqi3                            (rtx, rtx, rtx);
extern rtx        gen_iorqi3                            (rtx, rtx, rtx);
extern rtx        gen_xorqi3                            (rtx, rtx, rtx);
extern rtx        gen_andv2qi3                          (rtx, rtx, rtx);
extern rtx        gen_iorv2qi3                          (rtx, rtx, rtx);
extern rtx        gen_xorv2qi3                          (rtx, rtx, rtx);
extern rtx        gen_addsi3                            (rtx, rtx, rtx);
extern rtx        gen_subsi3                            (rtx, rtx, rtx);
extern rtx        gen_adddi3                            (rtx, rtx, rtx);
extern rtx        gen_subdi3                            (rtx, rtx, rtx);
extern rtx        gen_addti3                            (rtx, rtx, rtx);
extern rtx        gen_subti3                            (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                           (rtx, rtx, rtx);
extern rtx        gen_ashldi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlti3                           (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrti3                           (rtx, rtx, rtx);
extern rtx        gen_lshrti3                           (rtx, rtx, rtx);
extern rtx        gen_vec_shl_v2qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v2qi                      (rtx, rtx, rtx);
extern rtx        gen_mulhi3                            (rtx, rtx, rtx);
extern rtx        gen_mulhisi3                          (rtx, rtx, rtx);
extern rtx        gen_umulhisi3                         (rtx, rtx, rtx);
extern rtx        gen_ashrhi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrqi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlhi3                           (rtx, rtx, rtx);
extern rtx        gen__ashrhi3                          (rtx, rtx, rtx);
extern rtx        gen_lshrhi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlhi3                           (rtx, rtx, rtx);
extern rtx        gen_rotrhi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlqi3                           (rtx, rtx, rtx);
extern rtx        gen__ashrqi3                          (rtx, rtx, rtx);
extern rtx        gen_lshrqi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlqi3                           (rtx, rtx, rtx);
extern rtx        gen_rotrqi3                           (rtx, rtx, rtx);
extern rtx        gen_one_cmplphi2                      (rtx, rtx);
extern rtx        gen_one_cmplhi2                       (rtx, rtx);
extern rtx        gen_one_cmplqi2                       (rtx, rtx);
extern rtx        gen_one_cmplv2qi2                     (rtx, rtx);
extern rtx        gen_extendhisi2                       (rtx, rtx);
extern rtx        gen_extendqihi2                       (rtx, rtx);
extern rtx        gen_zero_extendqihi2                  (rtx, rtx);
extern rtx        gen_cstorehi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoreqi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen__scond                            (rtx, rtx);
extern rtx        gen__scond_scratch                    (rtx, rtx);
extern rtx        gen_parityhi2                         (rtx, rtx);
extern rtx        gen_parityqi2                         (rtx, rtx);
extern rtx        gen_movmemhi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_setmemhi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchhi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchqi4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_call                              (rtx, rtx, rtx);
extern rtx        gen_call_pop                          (rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall                           (rtx, rtx);
extern rtx        gen_call_value                        (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_pop                    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_value                     (rtx, rtx, rtx);
extern rtx        gen_prologue                          (void);
extern rtx        gen_epilogue                          (void);
extern rtx        gen_sibcall_epilogue                  (void);
extern rtx        gen_simple_return                     (void);
extern rtx        gen_seg_override_prot_mode            (rtx);
extern rtx        gen_seg_override                      (rtx);
extern rtx        gen_seg16_reloc_prot_mode             (rtx);
extern rtx        gen_seg16_reloc                       (rtx);
extern rtx        gen_static_far_ptr                    (rtx);
extern rtx        gen__pushphi1_prologue                (rtx);

#endif /* GCC_INSN_FLAGS_H */
