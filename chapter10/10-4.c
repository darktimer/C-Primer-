#include <stdio.h>

int getIndex(double*, int);

int main(void) {
	double arr[6] = { 1.1,2.2,3.3,6.6,4.4,5.5 };

	printf("Index of max num of arr is %d.", getIndex(arr, 6));

	return 0;
}

int getIndex(double* arr, int size) {
	int index = 0;
	double max = 0.0;

	for (int i = 0; i < size; i++) {
		if (*arr > max) {
			max = *arr;
			index = i;
		}
		arr++;
	}

	return index;
}