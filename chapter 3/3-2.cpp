#include <stdio.h>

int main(void) {

	int inputNum;

	printf("Please input an ASCII num:");
	scanf_s("%d", &inputNum);
	printf("The ASCII character is: %c", inputNum);

	return 0;
}