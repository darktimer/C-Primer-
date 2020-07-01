//这个删除我该怎么理解？
//置为空？还是把后面的字符提前？
//估计题意是字符提前吧。
//可能置空的话字符串就被截断了。
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 40

char* getString(char*, int);	//自定义获取字符串
void sentence(char*);			//删除空格

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

	if (fgets(str, n, stdin) && str[0] != '\n') {	//获取字符串行成功且不是空行
		while (str[i] != '\0' && str[i] != '\n')
			i++;
		if (str[i] == '\n')
			str[i] = '\0';		//设为字符串结尾
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
			for (i = 0; temp[i]!='\0'; i++)		//碰到空格字符，就开始从空格字符开始遍历到字符串结束，重复把后一位字符提前一位。
				*(temp + i) = *(temp + i + 1);	//这里用偏移量来访问元素，实质是数组的形式，所以遍历结束后，指针还在原来空格字符的位置。
		}
		else
			temp++;		//若果不是空字符，指针副本指向下一个字符。总体思想就是只要碰到一个空白字符就把后面所有字符（包括后面的空白字符）都提前一位，所以这个算法还不够好不是最优解...
	}
	printf("remove space:\t%s\n", str);
	printf("length: %d\n", strlen(str));
	return;
}