//做第 10 题才发现这题是要求倒序覆盖原字符串
//其实也就是再用个中间变量把收尾元素交换
//只需要遍历一半元素就行
//就这样吧不改了
#include <stdio.h>
#include <string.h>
#define SIZE 99

int main(void) {
	char str[40] = { '\0' };
	char* temp = str;		//副本指针指向字符串
	int ct = 0, i = 0;

	printf("Enter string:\t");
	while (scanf_s("%s", str, sizeof(str))) {	//一直输一直输
		while (getchar() != '\n')				//清除输入缓存
			continue;
		printf("Your string:\t%s\n", str);
		ct = strlen(str);						//获取字符串长度
		printf("reverse string:\t");
		for (i = 1; i <= ct; i++) {
			putchar(*(temp + ct - i));			//指针偏移指向最后一个字符。字符串长度是 5 ，最后一个字符应该下标是 4 
		}
		printf("\nEnter string:\t");
	}
	return 0;
}