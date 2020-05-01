#include <stdio.h>

void getReverse(double*, int);

int main(void) {
	double arr[6] = { 1.1,2.2,3.3,6.6,4.4,5.5 };

	for (int i = 0; i < 6; i++) {
		printf("before: arr[%d]:%.1lf\n", i, *(arr + i));
	}

	getReverse(arr, 6);

	for (int j = 0; j < 6; j++) {
		printf("after: arr[%d]:%.1lf\n", j, *(arr + j));
	}

	return 0;
}

void getReverse(double* arr, int size) {
	double temp = 0.0;

	for (int i = 0; i < size / 2; i++) {
		temp = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = temp;
	}
	return;
}