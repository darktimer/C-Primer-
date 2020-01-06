#include <stdio.h>
#include <math.h>

int main(void) {

	printf("sizeof int %zd B\n", sizeof(int));
	printf("sizeof short %zd B\n", sizeof(short));
	printf("sizeof long %zd B\n", sizeof(long));
	printf("sizeof long long %zd B\n", sizeof(long long));
	printf("sizeof float %zd B\n", sizeof(float));
	printf("sizeof double %zd B\n", sizeof(double));
	printf("sizeof long double %zd B\n", sizeof(long double));

	/*
	sizeof int 4 B
	sizeof short 2 B
	sizeof long 4 B
	sizeof long long 8 B
	sizeof float 4 B
	sizeof double 8 B
	sizeof long double 8 B
	*/

	return 0;
}