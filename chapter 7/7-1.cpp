#include <stdio.h>
#include <ctype.h>
int main(void) {
	char ch = '\0';
	int space = 0, enter = 0, etc = 0;

	while ((ch = getchar()) != '#') {
		if (ch == ' ')	//isspace()函数计算空白字符，但其定义的空白字符不仅包括空格，还包括另5种可制造空白的功能键。
			space++;
		else if (ch == '\r' || ch == '\n')	//C99 isblank()函数可以计算空白字符，但其定义的空白字符包含空格键和Tab键。
			enter++;
		else
			etc++;
	}
	printf("space = %d, enter = %d, etc = %d", space, enter, etc);

	return 0;
}