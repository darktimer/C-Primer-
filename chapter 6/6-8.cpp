#include <stdio.h>
int main(void) {
	double num1 = 0.0, num2 = 0.0;

	printf("Follow order enterin num1 and num2 todo math, input character to quit\nNow enter num1&num2 seperate by space:");
	while (scanf_s("%lf%lf", &num1, &num2)) {
		printf("U entered num1=%.2lf num2=%.2lf\n", num1, num2);
		printf("(num1 - num2) / (num1 * num2) = %.2lf\n", (num1 - num2) / (num1 * num2));
	}
	printf("see u");

	return 0;
}