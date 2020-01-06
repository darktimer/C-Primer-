#include <stdio.h>

int main(void) {

	int age;
	float seconds;

	printf("Enter your age:");
	scanf_s("%d", &age);

	seconds = age * 3.156E7;

	printf("u have lived %.3e seconds on earth^-^#", seconds);

	return 0;
}