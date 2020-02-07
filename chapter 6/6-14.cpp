#include <stdio.h>
#define SIZE 8

int main(void) {
	double num1[SIZE] = { 0 }, num2[SIZE] = { 0 };
	double sum = 0;

	printf("Enter num in first array,each figure seperated by space:");
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%lf", &num1[i]);
		if (i == 0)
			num2[i] = num1[i];
		else {
			int k = i;
			num2[i] = num2[--k] + num1[i];
		}
	}
	for (int i = 0; i < SIZE; i++)
		printf("%.2lf\t", num1[i]);
	printf("\n");
	for (int i = 0; i < SIZE; i++)
		printf("%.2lf\t", num2[i]);

	return 0;
}