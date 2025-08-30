#include <stddef.h>
#include <stdio.h>

#include <CodeGenerateTest.h>
#include <CodeGenerateTest_types.h>
#include <rtwtypes.h>

static double a;
static double b;
static double c;

static RT_MODEL_CodeGenerateTest_T CodeGenerateTest_M_;
static RT_MODEL_CodeGenerateTest_T *const CodeGenerateTest_MPtr =
    &CodeGenerateTest_M_;

// init Simulink Code
void DemoInit(RT_MODEL_CodeGenerateTest_T *const CodeGenerateTest_M,
              real_T *CodeGenerateTest_U_a, real_T *CodeGenerateTest_U_b,
              real_T *CodeGenerateTest_Y_result) {
    // initialize
    CodeGenerateTest_initialize(CodeGenerateTest_M, CodeGenerateTest_U_a,
                                CodeGenerateTest_U_b,
                                CodeGenerateTest_Y_result);
}

// Call Simulink Code step function
void DemoOneStep(RT_MODEL_CodeGenerateTest_T *const CodeGenerateTest_M) {
    static boolean_T OverrunFlag = false;

    if (OverrunFlag) {
        rtmSetErrorStatus(CodeGenerateTest_M, "Overrun");
        return;
    }

    OverrunFlag = true;

    SimulinkFunctionTest(CodeGenerateTest_M, a, b, &c);
    OverrunFlag = false;
}

int main() {
    printf("Simulink Code Embbeded test...\n");

    RT_MODEL_CodeGenerateTest_T *const CodeGenerateTest_M =
        CodeGenerateTest_MPtr;

    DemoInit(CodeGenerateTest_M, &a, &b, &c);
 
    // set variables
    a = 23.33;
    printf("set a equl %f\n", a);
    b = 12.3;
    printf("set b equl %f\n", b);

    DemoOneStep(CodeGenerateTest_M);
    printf("add a and b\n");

    printf("resutl c : %f\n", c);

    return 0;
}
