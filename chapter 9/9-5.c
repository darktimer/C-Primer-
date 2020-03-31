#include <stdio.h>

double getMax(double, double);

int main(void) {
	printf("Enter two double:");

	double temp1, temp2;

	scanf_s("%lf %lf", &temp1, &temp2);
	printf("%.2lf", getMax(temp1, temp2));

	return 0;
}

double getMax(double a, double b) {
	if (a > b)
		return a;
	else if (a < b)
		return b;
	else
		return a;
}