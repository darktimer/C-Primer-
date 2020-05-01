#include <stdio.h>

#define SIZE 4

void copy_ptrs(double(*)[SIZE], double(*)[SIZE], int);	//注意多维数组的函数原型声明写法

int main(void) {
	double arr[3][SIZE] = { {1.1,2.2,3.3,4.4},{2.2,3.3,4.4,1.1},{3.3,4.4,1.1,2.2} };
	double target[3][SIZE] = { 0 };

	printf("original arr:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("arr[%d][%d]:%.1lf\t", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}

	printf("\nbefor copy:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("target[%d][%d]:%.1lf\t", i, j, *(*(target + i) + j));
		}
		printf("\n");
	}

	copy_ptrs(target, arr, 3);

	printf("\nafter copy:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("target[%d][%d]:%.1lf\t", i, j, *(*(target + i) + j));
		}
		printf("\n");
	}

	return 0;
}

void copy_ptrs(double(*target)[SIZE], double(*arr)[SIZE], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < SIZE; j++) {
			*(*(target + i) + j) = *(*(arr + i) + j);
		}
	}
	return;
}