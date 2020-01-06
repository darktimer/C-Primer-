#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	printf("Max int : %d\n", INT_MAX);
	printf("Min int : %d\n", INT_MIN);

	printf("Min float : %d\n", FLT_MIN_10_EXP);//float最小负指数
	printf("Min double : %d\n",DBL_MIN_10_EXP);//double最小负指数
	printf("Min float : %e\n", FLT_MIN);
	printf("Min double : %e\n", DBL_MIN);

	/*
	Max int : 2147483647
	Min int : -2147483648
	Max float : -37
	Max double : -307
	Max float : 1.175494e-38
	Max double : 2.225074e-308
	*/
	return 0;
}