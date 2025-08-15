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

void SimuOneStep(RT_MODEL_CodeGenerateTest_T *const CodeGenerateTest_M) {
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

    // initialize a b c
    CodeGenerateTest_initialize(CodeGenerateTest_M, &a, &b, &c);

    a = 23.33;
    printf("set a equl %f\n", a);
    b = 12.3;
    printf("set b equl %f\n", b);

    SimuOneStep(CodeGenerateTest_M);
    printf("add a and b\n");

    printf("resutl c : %f\n", c);

    return 0;
}
