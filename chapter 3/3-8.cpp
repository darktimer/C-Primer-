#include <stdio.h>

int main(void) {
	
	double cups,pint,ounce,soupladle,teaspoon;

	printf("Enter cups:");
	scanf_s("%lf", &cups);

	pint = cups / 2.0;
	ounce = cups * 8.0;
	soupladle = ounce / 2.0;
	teaspoon = soupladle / 3.0;

	printf("%.3lf cups = %.3lf pint = %.3lf ounce = %.3lf soupladle = %.3lf teaspoon", cups, pint, ounce, soupladle, teaspoon);

	return 0;
}