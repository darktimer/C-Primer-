#include <stdio.h>
#include <string.h>
#define SIZE 40

char* getString(char*, int);	//自定义获取字符串
void sentence(char*);

int main(void) {
	char str[SIZE] = { '\0' };

	while (getString(str, SIZE) != '\n') {
		sentence(str);
	}
	printf("Empty line! quit...");

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
	}
	return res_val;
}
void sentence(char* str) {
	char* temp = str;

	return;
}