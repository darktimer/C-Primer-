#include<stdio.h>

int data[2] = { 100, 200 };
int moredata[2] = { 300, 400 };

int main(void) {
	int* p1, * p2, * p3;
	//int* p1, p2, p3;	�������֮ǰ��һ��ä�㣺
	//������ָ�����ʱ��int* ������д��ֻ��ָ��֮���һ��������ָ��
	//����ֻ�� int �ͣ������Ҫ����Ϊָ���ͣ������ÿ��������Ҫ�� *

	p1 = p2 = data;
	p3 = moredata;

	printf(" *p1 = %d\t*p2 = %d\t*p3 = %d\n", *p1, *p2, *p3);
	printf(" *p1++ = %d\t*++p2 = %d\t(*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf(" *p1 = %d\t*p2 = %d\t*p3 = %d\n", *p1, *p2, *p3);

	return 0;

}