#include <stdio.h>
#define LITER 3.785
#define KM 1.609
int main(void) {
	printf("enter mile and gallon:");
	double mile, gallon;
	scanf_s("%lf %lf", &mile, &gallon);
	double liters = LITER * gallon, km = KM * mile;
	double resualt = liters/km;

	printf("%.1lf miles per gallon\n", resualt * 100);

	return 0;
}