#include <stdio.h>
int main(void) {
	char ch = '\0';
	int count = 0;

	while ((ch = getchar()) != '#') {
		if (ch == '.') {
			ch = '!';
			count++;
		}
		else if (ch == '!') {
			//ch == '!!';		//charֻ�ܴ浥���ַ�����������Ƿϻ���
			count++;
			putchar('!');
		}
		putchar(ch);
	}
	printf("conut: %d", count);

	return 0;
}