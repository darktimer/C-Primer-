#include <stdio.h>

int main(void) {

	double a = 1000000000;

	double b = 123.456;

	printf("%e\n", a);

	printf("%f\n", a);

	printf("%lf\n", a);

	printf("%g\n", a);

	printf("%e\n", b);

	printf("%f\n", b);

	printf("%lf\n", b);

	printf("%g\n", b);

	/*
	1.000000e+09
	1000000000.000000
	1000000000.000000
	1e+09
	1.234560e+02
	123.456000
	123.456000
	123.456
	*/
	
	return 0;
}
