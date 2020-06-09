#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 50

char* getWord(char*);

int main(void) {
	char word[SIZE] = { '\0' };

	while (getWord(word)) 								//如果返回的不是空指针NULL的话循环输入
		puts(word);
	fputs("NULL RETURN!", stdout);						//返回空指针就跳到这里结束

	return EXIT_SUCCESS;								//新表达方式，在头文件 stdlib.h 里
}
char* getWord(char* word) {
	char* ret_val = word;
	char ch;											//一个字符一个字符处理!!!!!虽然输入时是字符序列的形式，

	while ((ch = getchar()) != EOF && isspace(ch))		//检查第一个非空字符前面的字符，跳过空白。第一次获取输入缓存
		continue;
	if (ch == EOF)										//如果直接到了结尾就直接返回空
		return NULL;
	else
		*word++ = ch;									//把遇到的第一个非空字符赋给word指针
	while ((ch = getchar()) != EOF && !isspace(ch))		//检查第一个非空字符后的字符，如果也为非空就赋给word指针。第二次获取输入缓存
		*word++ = ch;
	*word = '\0';										//碰到空字符了就跳出while循环并将最后一个非空字符后面的位置设置为\0形成一个字符串
	if (ch == EOF)										//如果直接到了结尾就直接返回空
		return NULL;
	else {
		while (ch != '\n')								//跳过后面所有输入。第三次获取输入缓存
			ch = getchar();
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