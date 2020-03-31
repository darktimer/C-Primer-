#include <stdio.h>

double getNum(double, double);

int main(void) {
	double temp1, temp2;

	printf("Enter two double :");
	scanf_s("%lf %lf", &temp1, &temp2);
	printf("%.2lf", getNum(temp1, temp2));

	return 0;
}

double getNum(double a, double b) {
	return 1 / ((1 / a + 1 / b) / 2);
}