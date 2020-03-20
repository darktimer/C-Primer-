#include <stdio.h>

int main(void) {

	int ch = 0;
	int count = 0;

	//不同的系统支持 EOF 的方法不同，在 windows 下，输入回车后，在空行按组合键 Ctrl + Z ,再回车确认就可以了
	while ((ch = getchar()) != EOF) {
		count++;
		putchar(ch);
	}

	printf("\n%d", count);

	return 0;
}