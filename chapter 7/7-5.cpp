#include <stdio.h>
int main(void) {
	char ch = '\0';
	int count = 0;

	while ((ch = getchar()) != '#') {
		switch (ch) {	//����case��break�Ļ���һֱ˳��ִ����ȥֱ��break�����һ��switch�����˳�
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