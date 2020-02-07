#include <stdio.h>

double Alternating(double);
double Increasing(double);

int main(void) {
	printf("Enter calculation times:");
	int inputCount = 0;
	while (scanf_s("%d", &inputCount)) {
		if (inputCount <= 0) break;
		double sum = 0;
		int i = 0;
		for (i=inputCount; i > 0; i--) {
			sum += 1.0 / Alternating((double)inputCount) + 1.0 / Increasing((double)inputCount);	//其实可以用递归....
		}
		printf("sum of %d times two sequences is %.2lf\n", inputCount, sum);
		printf("Enter calculation times:");
	}
	printf("Done");

	return 0;
}
double Alternating(double num) {
	if ((int)num % 2 == 0)
		return -num;
	else
		return num;
}
double Increasing(double num) {
	return num;
}