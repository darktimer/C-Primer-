#include<stdio.h>

int data[2] = { 100, 200 };
int moredata[2] = { 300, 400 };

int main(void) {
	int* p1, * p2, * p3;
	//int* p1, p2, p3;	这里出现之前的一个盲点：
	//在声明指针变量时，int* 这样的写法只能指定之后第一个变量是指针
	//其他只是 int 型，如果都要声明为指针型，则必须每个变量都要加 *

	p1 = p2 = data;
	p3 = moredata;

	printf(" *p1 = %d\t*p2 = %d\t*p3 = %d\n", *p1, *p2, *p3);
	printf(" *p1++ = %d\t*++p2 = %d\t(*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf(" *p1 = %d\t*p2 = %d\t*p3 = %d\n", *p1, *p2, *p3);

	return 0;

}