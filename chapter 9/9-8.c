#include <stdio.h>
#include <math.h>

int main(void) {
	double base, exponent;

	printf("Enter base and exponent:");
	scanf_s("%lf %lf", &base, &exponent);
	printf("result = %.2lf", pow(base, exponent));

	return 0;
}//仔细读了一遍题发现我的改进没毛病##无非就是多写两个if，pass