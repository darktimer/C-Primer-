//����ʵ�����Ǻ��� strstr �ĸ���
//����˳������ȡ�ַ���Ҳ��������
//���������д�ĺ����ں�������� 2 ���ַ����а����� 1 ���ַ���
//���ص� 1 ���ַ�����ʼ�ĵ�ַ����ʾ�� string_in("hats", "at")
//�����ǵ� 1 ���ַ��� hats ������ 2 ���ַ��� at
//��ʵӦ����û˵��ģ�����֮ǰ���ĸ����ڵ��Թ����з���
//�����Ĳ����б��Ǵ���������յģ�Ҳ���Ƕ��ں��� string_in ��˵
//�� 1 ���ַ����� at ���� 2 ���ַ����� hats
#include <stdio.h>
#include <string.h>
#define SIZE 50

char* getString(char*, int);			//�Զ����ȡ�ַ���
char* string_in(char*, char*);

int main(void) {
	char str1[SIZE] = { '\0' };
	char str2[SIZE] = { '\0' };
	char* res_val = NULL;	//���ָ��

	while (1) {						//ѭ������....����������ͣЪ
		printf("ENTER str1:\n");
		getString(str1, SIZE);
		printf("ENTER str2:\n");
		getString(str2, SIZE);
		if (res_val = string_in(str2, str1)) {
			printf("FOUND at %s\n", res_val);
		}
		else {
			printf("NOT FOUND!\n");
		}
	}

	return 0;
}
char* getString(char* str, int n) {
	int i = 0;		//������

	if (fgets(str, n, stdin)) {
		while (str[i] != '\n' && str[i] != '\0')
			i++;
		if (str[i] == '\n')		//fgets��洢���з�������һ�¡�
			str[i] = '\0';
		else while (getchar() != '\n')	//�������뻺����ʣ�µ�����
			continue;
	}
	return str;
}

char* string_in(char* str2, char* str1) {
	char* temp2 = str2;						//��������ָ��
	char* temp1 = str1;
	int ct2 = strlen(str2), ct1 = strlen(str1);	//�ַ������ַ�����
	int i1 = 0, i2 = 0;		//ƫ����������

	while (*str1) {
		if (*(temp2 + i2) == *(temp1 + i1)) {
			i2++;
			i1++;
		}
		else {
			i2++;
		}
		if (i1 == ct1)		//���� 1 ���ַ����ļ���ֵ�����䳤��ʱ����ζ�ŵ� 2 ���ַ����а����� 1 ���ַ���
			return str2 + i2 - i1;		//���ص� 2 ���ַ����е� 1 ���ַ�����ʼ�ĵ�ַ
		else if (i2 == ct2 && i1 != ct1)	//��ʵ && i1 != ct1 �����������д�����������֧�ͱ�ʾ�����˼�ˡ�
			return  NULL;
	}
	return NULL;
}