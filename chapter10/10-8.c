#include <stdio.h>

void copy_ptr(double*, double*, int);

int main(void) {
	double source[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	double target[3] = { 0.0 };

	printf("before:\n");
	for (int i = 0; i < 3; i++) {
		printf("target[%d]:%.1lf\t", i, *(target + i));
	}
	printf("\n");

	copy_ptr(source, target, 3);

	printf("after:\n");
	for (int i = 0; i < 3; i++) {
		printf("target[%d]:%.1lf\t", i, *(target + i));
	}
	printf("\n");

	return 0;
}

void copy_ptr(double* source, double* target, int size) {
	for (int i = 0; i < size; i++) {
		*(target + i) = *(source + size - 1 + i);
	}

	return;
}