//���ɾ���Ҹ���ô��⣿
//��Ϊ�գ����ǰѺ�����ַ���ǰ��
//�����������ַ���ǰ�ɡ�
//�����ÿյĻ��ַ����ͱ��ض��ˡ�
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 40

char* getString(char*, int);	//�Զ����ȡ�ַ���
void sentence(char*);			//ɾ���ո�

int main(void) {
	char str[SIZE] = { '\0' };

	while (*getString(str, SIZE) != '\n') {
		sentence(str);
	}
	printf("Empty line! quit...\n");

	return 0;
}
char* getString(char* str, int n) {
	printf("Enter string:\t");

	char* res_val = str;
	int i = 0;

	if (fgets(str, n, stdin) && str[0] != '\n') {	//��ȡ�ַ����гɹ��Ҳ��ǿ���
		while (str[i] != '\0' && str[i] != '\n')
			i++;
		if (str[i] == '\n')
			str[i] = '\0';		//��Ϊ�ַ�����β
		else while (getchar() != '\n')
			continue;
		printf("length: %d\n", strlen(str));
	}
	return res_val;
}
void sentence(char* str) {
	char* temp = str;
	int i = 0;

	while (*temp) {
		if (isspace(*temp)) {
			for (i = 0; temp[i]!='\0'; i++)		//�����ո��ַ����Ϳ�ʼ�ӿո��ַ���ʼ�������ַ����������ظ��Ѻ�һλ�ַ���ǰһλ��
				*(temp + i) = *(temp + i + 1);	//������ƫ����������Ԫ�أ�ʵ�����������ʽ�����Ա���������ָ�뻹��ԭ���ո��ַ���λ�á�
		}
		else
			temp++;		//�������ǿ��ַ���ָ�븱��ָ����һ���ַ�������˼�����ֻҪ����һ���հ��ַ��ͰѺ��������ַ�����������Ŀհ��ַ�������ǰһλ����������㷨�������ò������Ž�...
	}
	printf("remove space:\t%s\n", str);
	printf("length: %d\n", strlen(str));
	return;
}