//���� 10 ��ŷ���������Ҫ���򸲸�ԭ�ַ���
//��ʵҲ�������ø��м��������βԪ�ؽ���
//ֻ��Ҫ����һ��Ԫ�ؾ���
//�������ɲ�����
#include <stdio.h>
#include <string.h>
#define SIZE 99

int main(void) {
	char str[40] = { '\0' };
	char* temp = str;		//����ָ��ָ���ַ���
	int ct = 0, i = 0;

	printf("Enter string:\t");
	while (scanf_s("%s", str, sizeof(str))) {	//һֱ��һֱ��
		while (getchar() != '\n')				//������뻺��
			continue;
		printf("Your string:\t%s\n", str);
		ct = strlen(str);						//��ȡ�ַ�������
		printf("reverse string:\t");
		for (i = 1; i <= ct; i++) {
			putchar(*(temp + ct - i));			//ָ��ƫ��ָ�����һ���ַ����ַ��������� 5 �����һ���ַ�Ӧ���±��� 4 
		}
		printf("\nEnter string:\t");
	}
	return 0;
}