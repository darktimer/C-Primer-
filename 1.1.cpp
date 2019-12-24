#include <stdio.h>

int main(void) {

    double inch, centimeter;

    printf("please enter inches:");
    scanf_s("%lf", &inch);

    centimeter = inch / 2.54;

    printf("%.2lf inches is %g centimeter", inch, centimeter);
     
    return 0;
}

