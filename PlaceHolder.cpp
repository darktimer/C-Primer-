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

	return 0;
}