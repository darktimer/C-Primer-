#include <stdio.h>
#include <ctype.h>
#define CIRCLE 8
int main(void) {
	char ch = '\0';
	int count = 0;

	while ((ch = getchar()) != '#') {
		if (isalpha(ch)) {
			printf("%c:%d|", ch, ch);	//这里有个坑，就是输入的时候敲回车也会输出回车的ascii:10,所以直接使用函数判断是否是字母
			count++;	//这里的计数直到输入#才会重置，所以分两次输入字符，计数不会重新开始，所以会出现不满8个换行的现象。
		}
		if (count % CIRCLE == 0)
			printf("\n");
	}

	return 0;
}