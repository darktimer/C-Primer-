#include <stdio.h>

int main(void) {

	double in, cm;

	printf("Enter your in:");
	scanf_s("%lf", & in);
	
	cm = in * 2.54;

	printf("your stature is %.2lf cm", cm);

	return 0;
}