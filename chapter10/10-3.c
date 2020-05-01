#include <stdio.h>

int getMax(int*, int);

int main(void) {
	int arr[5] = { 100,200,300,400,500 };

	printf("Max num is %d.", getMax(arr, 5));

	return 0;
}

int getMax(int* arr, int size) {
	int max = 0;

	for (int i = 0; i < size; i++) {
		if (*arr > max)
			max = *arr;
		arr++;
	}

	return max;
}