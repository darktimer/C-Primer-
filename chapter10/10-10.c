#include <stdio.h>

#define SIZE 4

void copy_ptrs(int*, int*, int*, int);

int main(void) {
	int arr1[SIZE] = { 2,4,5,8 };
	int arr2[SIZE] = { 1,0,4,6 };
	int arr3[SIZE] = { 0 };

	printf("\nbefore:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("arr3[%d]:%d\t", i, *(arr3 + i));
	}

	copy_ptrs(arr1, arr2, arr3, SIZE);

	printf("\n\nafter:\n");
	for (int j = 0; j < SIZE; j++) {
		printf("arr3[%d]:%d\t", j, *(arr3 + j));
	}

	return 0;
}

void copy_ptrs(int arr1[], int arr2[], int arr3[], int size) {
	for (int i = 0; i < size; i++) {
		*(arr3 + i) = *(arr1 + i) + *(arr2 + i);
	}
	return;
}