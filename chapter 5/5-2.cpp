#include <stdio.h>
int main(void) {
	printf("input num:\n");

	int num = 0, temp;

	scanf_s("%d", &num);
	temp = num + 10;
	while (num <= temp) {
		printf("%d\n", num++);
	}

	return 0;
}