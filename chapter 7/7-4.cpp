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
			//ch == '!!';		//char只能存单个字符，所以这句是废话。
			count++;
			putchar('!');
		}
		putchar(ch);
	}
	printf("conut: %d", count);

	return 0;
}