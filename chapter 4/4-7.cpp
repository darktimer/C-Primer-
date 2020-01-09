#include <stdio.h>
#include <float.h>
int main(void) {
	double num1 = 1.0 / 3.0;
	float num2 = 1.0 / 3.0;

	printf("num1 = %.6f num2 = %.6f\n", num1, num2);
	printf("num1 = %.12f num2 = %.12f\n", num1, num2);
	printf("num1 = %.16f num2 = %.16f\n", num1, num2);
	printf("FLT_DIG = %d DBL_DIG = %d\n", FLT_DIG, DBL_DIG);

	return 0;
}