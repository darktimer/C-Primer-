#include <stdio.h>
#include <math.h>

int main(void) {

	int integer_overflow;
	float float_overflow, float_underflow;

	integer_overflow = pow(2, 31) - 1;		//int�͵��������ֵ
	float_overflow = 3.4E38 * 100.0f;		//��������
	float_underflow = 3.4E-38 / 10E10;		//��������

	/*
	float��ʾ��Χ��3.4E-38~3.4E38
	double��ʾ��Χ��1.7E-308~1.7E308
	*/

	printf("integer_overflow = %d\ninteger_overflow+1 = %d\ninteger_overflow+2 = %d\n", integer_overflow, integer_overflow+1,integer_overflow+2);
	printf("flo_overflow = %e\n", float_overflow);
	printf("flo_underflow = %e\n", float_underflow);

	return 0;
}