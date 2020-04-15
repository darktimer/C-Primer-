#include <stdio.h>

void copy_arr(double[], double[], int);
void copy_ptr(double*, double*, int);
void copy_ptrs(double*, double*, double*);

int main(void) {
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);
	for (int i = 0; i < 5; i++) {
		printf("target1[%d]:%.1lf\t", i, target1[i]);
		printf("target2[%d]:%.1lf\t", i, *(target2 + i));
		printf("target3[%d]:%.1lf\n", i, target3[i]);
	}

	return 0;
}

void copy_arr(double target1[], double source[], int size) {
	for (int i = 0; i < size; i++) {
		target1[i] = source[i];
		//printf("target1[%d]:%.1lf\n", i, target1[i]);
	}
	return;
}

void copy_ptr(double* target2, double* source, int size) {
	for (int i = 0; i < size; i++) {
		*(target2 + i) = *(source + i);
		//printf("target2[%d]:%.1lf\n", i, *(target2 + i));
	}
	return;
}

void copy_ptrs(double* target3, double* source, double* size) {
	int i = 0;
	while (source < size) {
		//*(target3++) = *(source++);	����д�Ļ�������ֱ�Ӿ���Ч�ˣ�����ȵ��¸�ѭ����
		//*(target3) = *(source++);		����ڱ���������ȷʵ�ǰ� source���鸴���� ����û����ĸ��Ƶ���������� target3 ��
		//printf("target3[%d]:%.1lf\n", i++, *(target3));
		*target3 = *source;
		target3++;
		source++;
	}
	return;
}