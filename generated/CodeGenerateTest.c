/*
 * File: CodeGenerateTest.c
 *
 * Code generated for Simulink model 'CodeGenerateTest'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Aug 15 14:17:57 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGenerateTest.h"
#include "CodeGenerateTest_private.h"

/* Model step function */
void SimulinkFunctionTest(RT_MODEL_CodeGenerateTest_T *const CodeGenerateTest_M,
  real_T CodeGenerateTest_U_a, real_T CodeGenerateTest_U_b, real_T
  *CodeGenerateTest_Y_result)
{
  /* Outport: '<Root>/result' incorporates:
   *  Inport: '<Root>/a'
   *  Inport: '<Root>/b'
   *  Sum: '<Root>/Add'
   */
  *CodeGenerateTest_Y_result = CodeGenerateTest_U_a + CodeGenerateTest_U_b;
  UNUSED_PARAMETER(CodeGenerateTest_M);
}

/* Model initialize function */
void CodeGenerateTest_initialize(RT_MODEL_CodeGenerateTest_T *const
  CodeGenerateTest_M, real_T *CodeGenerateTest_U_a, real_T *CodeGenerateTest_U_b,
  real_T *CodeGenerateTest_Y_result)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CodeGenerateTest_M, (NULL));

  /* external inputs */
  *CodeGenerateTest_U_a = 0.0;
  *CodeGenerateTest_U_b = 0.0;

  /* external outputs */
  *CodeGenerateTest_Y_result = 0.0;
  UNUSED_PARAMETER(CodeGenerateTest_M);
}

/* Model terminate function */
void CodeGenerateTest_terminate(RT_MODEL_CodeGenerateTest_T *const
  CodeGenerateTest_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(CodeGenerateTest_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
