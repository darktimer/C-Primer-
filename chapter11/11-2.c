#include <stdio.h>

int main(void) {
	char ch = getc(stdin);	//获取单个字符,但使用循环也可达到获取字符串的效果。

	while (!isspace(ch)) {
		putc(ch, stdout);	//打印单个字符。
		ch = getc(stdin);
	}
	return 0;
}