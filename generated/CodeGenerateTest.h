/*
 * File: CodeGenerateTest.h
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

#ifndef RTW_HEADER_CodeGenerateTest_h_
#define RTW_HEADER_CodeGenerateTest_h_
#include <stddef.h>
#ifndef CodeGenerateTest_COMMON_INCLUDES_
#define CodeGenerateTest_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGenerateTest_COMMON_INCLUDES_ */

#include "CodeGenerateTest_types.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_CodeGenerateTest_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void CodeGenerateTest_initialize(RT_MODEL_CodeGenerateTest_T *const
  CodeGenerateTest_M, real_T *CodeGenerateTest_U_a, real_T *CodeGenerateTest_U_b,
  real_T *CodeGenerateTest_Y_result);
extern void SimulinkFunctionTest(RT_MODEL_CodeGenerateTest_T *const
  CodeGenerateTest_M, real_T CodeGenerateTest_U_a, real_T CodeGenerateTest_U_b,
  real_T *CodeGenerateTest_Y_result);
extern void CodeGenerateTest_terminate(RT_MODEL_CodeGenerateTest_T *const
  CodeGenerateTest_M);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CodeGenerateTest'
 */
#endif                                 /* RTW_HEADER_CodeGenerateTest_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
