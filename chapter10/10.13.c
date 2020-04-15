#include <stdio.h>

int main(void) {
	int urn[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	//指针值 解引用指针 指针地址
	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p\t*ptr1 = %d\t&ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr3 = ptr1 + 4;	//指针加法
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p\t*(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
	ptr1++;	//递增指针
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p\t*ptr1 = %d\t&ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	ptr2--;	//递减指针
	printf("\nvalues after ptr2--:\n");
	printf("ptr2 = %p\t*ptr2 = %d\t&ptr2 = %p\n", ptr2, *ptr2, &ptr2);
	//恢复初始
	--ptr1;
	++ptr2;
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p\tptr2 = %p\n", ptr1, ptr2);
	//一个指针减去另个指针
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p\tptr1 = %p\tptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
	//一个指针减去一个整数
	printf("\nsubtracting an int from a pointer:\n");
	printf("ptr3 = %p\tptr3 - 2 = %p\n", ptr3, ptr3 - 2);

	return 0;
}