#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 10

char* getWord(char*, int);

int main(void) {
	char word[SIZE] = { '\0' };

	while (getWord(word, SIZE)) 						//加了一个控制参数，实际上用做了标记字符串数组的最后一位下标
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
		ret_val[count] = '\0';						//直接把最后一位元素置为'\0'空字符达到目的
		return ret_val;
	}
}

//太取巧了有点不好意思....
//void getWords(void);
//
//int main(void) {
//	getWords();
//	return 0;
//}
//void getWords(void) {
//	char str[SIZE] = { '\0' };
//
//	scanf_s("%s", str, sizeof(str));	//你是否已忘记 scanf 的妙处？转而追寻各种 get...
//	while (getchar() != '\n')
//		continue;
//	printf("word inputed: %s", str);
//
//	return;
//}