/* Test the `vclts32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vclts32 (void)
{
  uint32x2_t out_uint32x2_t;
  int32x2_t arg0_int32x2_t;
  int32x2_t arg1_int32x2_t;

  out_uint32x2_t = vclt_s32 (arg0_int32x2_t, arg1_int32x2_t);
}

/* { dg-final { scan-assembler "vcgt\.s32\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
