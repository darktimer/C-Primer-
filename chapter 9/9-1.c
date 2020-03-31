#include <stdio.h>

double min(double, double);

int main(void) {

	double temp1, temp2;
	scanf_s("%lf %lf", &temp1, &temp2);
	double minNum = min(temp1, temp2);
	printf("%lf", minNum);

	return 0;
}

double min(double temp1, double temp2) {
	if (temp1 < temp2)
		return temp1;
	else if (temp1 > temp2)
		return temp2;
	else
		return temp1;
}