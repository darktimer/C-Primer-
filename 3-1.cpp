#include <stdio.h>
#include <math.h>

int main(void) {

	int integer_overflow;
	float float_overflow, float_underflow;

	integer_overflow = pow(2, 31) - 1;		//int型的正数最大值
	float_overflow = 3.4E38 * 100.0f;		//范例上溢
	float_underflow = 3.4E-38 / 10E10;		//范例下溢

	/*
	float表示范围：3.4E-38~3.4E38
	double表示范围：1.7E-308~1.7E308
	*/

	printf("integer_overflow = %d\ninteger_overflow+1 = %d\ninteger_overflow+2 = %d\n", integer_overflow, integer_overflow+1,integer_overflow+2);
	printf("flo_overflow = %e\n", float_overflow);
	printf("flo_underflow = %e\n", float_underflow);

	return 0;
}