#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 50

char* getWord(char*);

int main(void) {
	char word[SIZE] = { '\0' };

	while (getWord(word)) 								//������صĲ��ǿ�ָ��NULL�Ļ�ѭ������
		puts(word);
	fputs("NULL RETURN!", stdout);						//���ؿ�ָ��������������

	return EXIT_SUCCESS;								//�±�﷽ʽ����ͷ�ļ� stdlib.h ��
}
char* getWord(char* word) {
	char* ret_val = word;
	char ch;											//һ���ַ�һ���ַ�����!!!!!��Ȼ����ʱ���ַ����е���ʽ��

	while ((ch = getchar()) != EOF && isspace(ch))		//����һ���ǿ��ַ�ǰ����ַ��������հס���һ�λ�ȡ���뻺��
		continue;
	if (ch == EOF)										//���ֱ�ӵ��˽�β��ֱ�ӷ��ؿ�
		return NULL;
	else
		*word++ = ch;									//�������ĵ�һ���ǿ��ַ�����wordָ��
	while ((ch = getchar()) != EOF && !isspace(ch))		//����һ���ǿ��ַ�����ַ������ҲΪ�ǿվ͸���wordָ�롣�ڶ��λ�ȡ���뻺��
		*word++ = ch;
	*word = '\0';										//�������ַ��˾�����whileѭ���������һ���ǿ��ַ������λ������Ϊ\0�γ�һ���ַ���
	if (ch == EOF)										//���ֱ�ӵ��˽�β��ֱ�ӷ��ؿ�
		return NULL;
	else {
		while (ch != '\n')								//���������������롣�����λ�ȡ���뻺��
			ch = getchar();
		return ret_val;
	}
}

//̫ȡ�����е㲻����˼....
//void getWords(void);
//
//int main(void) {
//	getWords();
//	return 0;
//}
//void getWords(void) {
//	char str[SIZE] = { '\0' };
//
//	scanf_s("%s", str, sizeof(str));	//���Ƿ������� scanf �����ת��׷Ѱ���� get...
//	while (getchar() != '\n')
//		continue;
//	printf("word inputed: %s", str);
//
//	return;
//}