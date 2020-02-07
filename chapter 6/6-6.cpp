#include <stdio.h>
#include <math.h>
int main(void) {
	int ceiling, floor;

	printf("Enter ceiling:");
	scanf_s("%d", &ceiling);
	printf("Enter floor:");
	scanf_s("%d", &floor);
	printf("\t\tTable\ninteger\t\tsquared\t\tthird power\n");

	int i;
	for (i = ceiling; i <= floor; i++) {
		printf("%d\t\t%d\t\t%d\n", i, (int)pow(i, 2), (int)pow(i, 3));
	}

	return 0;
}