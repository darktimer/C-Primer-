#include <stdio.h>
#include <ctype.h>
//这么久肯定忘了这个头文件了吧，ctype.h 里是一些判断字符类型的函数。

int main(void) {
	int ch = 0, count = 0;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
		if ((char)ch == '\n') {
			printf("lineBreak:\\n\t");
		}
		else if ((char)ch == '\t') {
			printf("tab:\\t\t");
		}
		else if (iscntrl((char)ch)) {
			printf("Seq:^%c\t", ch + 'A' - 1);	//这里留个坑，目前不会在命令行输入控制字符，也可能是我没读懂题，勉强做了。
		}
		else {
			printf(":%d\t", (int)(char)ch);
		}
		count++;
		if (count % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}