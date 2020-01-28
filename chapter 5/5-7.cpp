#include <stdio.h>
#include <math.h>

void show(double);
int main(void) {
	printf("Enter double num:");

	double num = 0;
	while (1) {
		scanf_s("%lf", &num);
		show(num);
	}

	return 0;
}
void show(double num) {
		printf("%.1lf ^ 3 = %.1lf\n", num, pow(num, 3));
}