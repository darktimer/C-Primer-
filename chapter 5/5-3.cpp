#include <stdio.h>
int main(void) {
	const int week = 7;
	int day = 0;

	printf("input days(0 or minus end):");
	scanf_s("%d", &day);
	while (day > 0) {
		if (day / week > 1)
			printf("u input %d weeks, %d days.\n", day / week, day % week);
		else
			printf("u input %d week, %d days.\n", day / week, day % week);
		scanf_s("%d", &day);
	}
	printf("done!");

	return 0;
}