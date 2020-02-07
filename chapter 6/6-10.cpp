#include <stdio.h>
#include <math.h>

int main(void) {
	printf("Enter lower and upper integer limits:");

	int lower = 0, upper = 0;
	while (scanf_s("%d%d", &lower, &upper) && lower < upper) {
		//if (lower >= upper) break;
		int sum = 0;
		for (int i = lower; i <= upper; i++) {
			sum += (int)pow(i, 2);
		}
		printf("The sums of the squares from %d to %d is %d\n", (int)pow(lower, 2), (int)pow(upper, 2), sum);
		printf("Enter next set of limits:");
	}
	printf("Done");

	return 0;
}