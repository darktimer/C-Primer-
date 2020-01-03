#include <stdio.h>

int main(void) {

	printf("sizeof int %zd B\n", sizeof(int));
	printf("sizeof short %zd B\n", sizeof(short));
	printf("sizeof long %zd B\n", sizeof(long));
	printf("sizeof long long %zd B\n", sizeof(long long));
	printf("sizeof float %zd B\n", sizeof(float));
	printf("sizeof double %zd B\n", sizeof(double));
	printf("sizeof long double %zd B\n", sizeof(long double));

	return 0;
}