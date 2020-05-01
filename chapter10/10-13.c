//既然题目里已经假设用户智商在线，我就不做输入验证了#￥#
#include <stdio.h>

#define ROWS 3
#define COLS 5

void input_arr(double(*)[COLS], int);
double averagePERrow(double[][COLS], int);
double averageTotal(double(*)[COLS], int);
double maxOFarr(double(*)[COLS], int);

int main(void) {
	double arr[ROWS][COLS] = { 0.0 };

	printf("enter double 5 num into arr per ROW:\n");
	input_arr(arr, ROWS);
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("arr[%d][%d]:%.1lf\t", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}

	printf("\naverage of each row of arr:\n");
	for (int i = 0; i < ROWS; i++) {
		printf("average of arr[%d]:%.1lf\n", i, averagePERrow(arr, i));
	}

	printf("\naverage of total arr:%.1lf\n", averageTotal(arr, ROWS));

	printf("\nmax num of arr:%.1lf\n", maxOFarr(arr, ROWS));

	return 0;
}

void input_arr(double(*arr)[COLS], int rsize) {
	for (int row = 0; row < rsize; row++) {
		for (int col = 0; col < COLS; col++) {
			scanf_s("%lf", &arr[row][col]);
		}
	}
	return;
}

double averagePERrow(double arr[][COLS], int rsize) {
	double ar = 0.0;

	for (int col = 0; col < COLS; col++) {
		ar += *(*(arr + rsize) + col);
	}
	ar /= COLS;

	return ar;
}

double averageTotal(double(*arr)[COLS], int rsize) {
	double at = 0.0;

	for (int row = 0; row < rsize; row++) {
		for (int col = 0; col < COLS; col++) {
			at += *(*(arr + row) + col);
		}
	}
	at /= ROWS * COLS;

	return at;
}

double maxOFarr(double(*arr)[COLS], int rsize) {
	double max = 0.0;

	for (int row = 0; row < rsize; row++) {
		for (int col = 0; col < COLS; col++) {
			if (*(*(arr + row) + col) > max)
				max = *(*(arr + row) + col);
		}
	}
	return max;
}