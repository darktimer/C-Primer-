#include <stdio.h>

#define ROWS 3
#define COLS 5

void show_ptr(int(*)[COLS], int);
void double_ptr(int(*)[COLS], int);

int main(void) {
	int arr[ROWS][COLS] = { {1,2,3,4,5},{2,3,4,5,1},{3,4,5,1,2} };

	printf("\nbefore:\n");
	show_ptr(arr, ROWS);

	double_ptr(arr, ROWS);
	printf("\nafter:\n");
	show_ptr(arr, ROWS);

	return 0;
}

void show_ptr(int(*arr)[COLS], int rsize) {
	for (int row = 0; row < rsize; row++) {
		for (int col = 0; col < COLS; col++) {
			printf("arr[%d]:%d\t", row, *(*(arr + row) + col));
		}
		printf("\n");
	}
	return;
}

void double_ptr(int(*arr)[COLS], int rsize) {
	for (int row = 0; row < rsize; row++) {
		for (int col = 0; col < COLS; col++) {
			*(*(arr + row) + col) = *(*(arr + row) + col) * 2;
		}
	}
	return;
}