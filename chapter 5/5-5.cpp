#include <stdio.h>
int main(void) {
	int count = 0, sum = 0, days = 0;

	printf("Enter days:");
	scanf_s("%d", &days);
	while (count++ < days) {
		sum += count;
	}
	printf("sum = %d\n", sum);

	return 0;
}