//编译器不支持变长数组
#include <stdio.h>

#define ROWS 3
#define COLS 5

void copy_ptr(double(*)[COLS], double(*)[COLS], int);	//注意匹配声明类型
//void fun(int(*)[NUM], int rows);
//void fun(int[][NUM], int rows);
//void fun(int ar[][4], int rows);
//void fun(int ar[3][4], int rows); 都是有效声明。维度必须是常量
void show_ptr(double[][COLS], double[][COLS], int);

int main(void) {
	double source[ROWS][COLS] = { {1.1,2.2,3.3,4.4,5.5},{2.2,3.3,4.4,5.5,1.1},{3.3,4.4,5.5,1.1,2.2} };
	double target[ROWS][COLS] = { 0.0 };

	printf("\nbefore:\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("target[%d][%d]:%.1lf  ", i, j, *(*(target + i) + j));
		}
		printf("\n");
	}

	copy_ptr(source, target, ROWS);

	printf("\nafter:\n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("target[%d][%d]:%.1lf  ", i, j, *(*(target + i) + j));
		}
		printf("\n");
	}

	show_ptr(source, target, ROWS);

	return 0;
}

void copy_ptr(double(*source)[COLS], double(*target)[COLS], int rsize) {
	for (int row = 0; row < rsize; row++) {
		for (int col = 0; col < COLS; col++) {
			*(*(target + row) + col) = *(*(source + row) + col);
		}
	}
	return;
}

void show_ptr(double source[][COLS], double target[][COLS], int rsize) {
	printf("\nnow in fun show_ptr:\n");
	printf("\nFIRST source:\n");
	for (int i = 0; i < rsize; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("source[%d][%d]:%.1lf  ", i, j, *(*(source + i) + j));
		}
		printf("\n");
	}
	printf("\nNEXT target:\n");
	for (int i = 0; i < rsize; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("target[%d][%d]:%.1lf  ", i, j, *(*(target + i) + j));
		}
		printf("\n");
	}
	return;
}