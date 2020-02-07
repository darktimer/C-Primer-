#include <stdio.h>
#include <math.h>
#define SIZE 8

int main(void) {
	int temp[SIZE] = { 0 };
	int k = 0;
	for (int i = 0; i < SIZE; i++) {
		temp[i] = (int)pow(2, i);
	}
	do {
		printf("%d\t", temp[k++]);
	} while (k < SIZE);

	return 0;
}