#include <stdio.h>

int main(void) {
	int input[8] = { 0 };
	for (int i = 0; i < 8; i++)
		scanf_s("%d", &input[i]);
	for (int j = 7; j >= 0; j--)
		printf("%d\t", input[j]);

	return 0;
}