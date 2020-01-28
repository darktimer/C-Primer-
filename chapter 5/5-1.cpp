#include <stdio.h>

int main(void) {
	const int min = 60;

	printf("input until min<=0;\n");

	int temp_min = 0;
	scanf_s("%d", &temp_min);

	while (temp_min > 0) {
		printf("u input %d h %d min, not enough!\n",temp_min/min, temp_min%min);
		scanf_s("%d", &temp_min);
	}
	printf("done!\n");

	return 0;
}