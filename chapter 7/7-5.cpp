#include <stdio.h>
int main(void) {
	char ch = '\0';
	int count = 0;

	while ((ch = getchar()) != '#') {
		switch (ch) {	//不在case里break的话会一直顺序执行下去直到break或最后一条switch语句才退出
		case '!':
			putchar('!');
			putchar(ch);
			count++;
			break;
		case '.':
			ch = '!';
			putchar(ch);
			count++;
			break;
		default:
			putchar(ch);
			break;
		}
	}
	printf("count : %d", count);

	return 0;
}