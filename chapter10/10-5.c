#include <stdio.h>

double getDifference(double*, int);

int main(void) {
	double arr[6] = { 1.1, 2.2, 3.3, 6.6, 4.4, 5.5 };

	printf("Difference between max and min in arr is %.1lf.\n", getDifference(arr, 6));

	return 0;
}

double getDifference(double* arr, int size) {
	double max = 0.0, min = arr[0];	//最小值设置成数组首元素的值，方便一次循环出结果
	double diff = 0.0;

	for (int i = 0; i < size; i++) {
		if (*arr >= max) {
			max = *arr;
		}
		else if (*arr <= min) {
			min = *arr;
		}
		arr++;
	}
	printf("max:%.1lf\tmin:%.1lf\n", max, min);

	diff = max - min;

	return diff;
}