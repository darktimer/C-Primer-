#include <stdio.h>

int main(void) {

    double inch, centimeter;

    printf("please enter inches:");
    scanf_s("%lf", &inch);              //这里是C99的特性 scanf_s可以有三个参数，其中sizeof()可以直接写入

    centimeter = inch / 2.54;

    printf("%.2lf inches is %g centimeter", inch, centimeter);      //%g 以较短的宽度输出单/双精度数
     
    return 0;
}
