#include<stdio.h>

int main(void) {

	printf("Enter a floating_point value:");
	
	float num = 0.0;
	
	scanf_s("%f", &num);
	printf("fixed-point notation: %f\n", num);
	printf("exponential notation: %e\n", num);
	printf("p notation: %a\n", num);		//p����������������ʮ�����Ƽ�������ռλ����%a��3.4.6.md����p����������

	/*
	Enter a floating_point value:64.25
	fixed-point notation: 64.250000
	exponential notation: 6.425000e+01
	p notation: 0x1.0100000000000p+6
	*/
	return 0;
}