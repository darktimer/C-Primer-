#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 10

char* getWord(char*, int);

int main(void) {
	char word[SIZE] = { '\0' };

	while (getWord(word, SIZE)) 						//����һ�����Ʋ�����ʵ���������˱���ַ�����������һλ�±�
		puts(word);
	fputs("NULL RETURN!", stdout);

	return EXIT_SUCCESS;
}
char* getWord(char* word, int count) {
	char* ret_val = word;
	char ch = '\0';

	while ((ch = getchar()) != EOF && isspace(ch))
		continue;
	if (ch == EOF)
		return NULL;
	else
		*word++ = ch;
	while ((ch = getchar()) != EOF && !isspace(ch))
		*word++ = ch;
	*word = '\0';
	if (ch == EOF)
		return NULL;
	else {
		while (ch != '\n')
			ch = getchar();
		ret_val[count] = '\0';						//ֱ�Ӱ����һλԪ����Ϊ'\0'���ַ��ﵽĿ��
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