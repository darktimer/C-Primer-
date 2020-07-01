//本题实质上是函数 strstr 的复现
//所以顺便连获取字符串也复现算了
//这里的题意写的很有内涵，如果第 2 个字符串中包含第 1 个字符串
//返回第 1 个字符串开始的地址，而示例 string_in("hats", "at")
//明明是第 1 个字符串 hats 包含第 2 个字符串 at
//其实应该是没说错的，忘了之前是哪个题在调试过程中发现
//函数的参数列表是从右往左接收的，也就是对于函数 string_in 来说
//第 1 个字符串是 at ，第 2 个字符串是 hats
#include <stdio.h>
#include <string.h>
#define SIZE 50

char* getString(char*, int);			//自定义获取字符串
char* string_in(char*, char*);

int main(void) {
	char str1[SIZE] = { '\0' };
	char str2[SIZE] = { '\0' };
	char* res_val = NULL;	//结果指针

	while (1) {						//循环输入....我让你永不停歇
		printf("ENTER str1:\n");
		getString(str1, SIZE);
		printf("ENTER str2:\n");
		getString(str2, SIZE);
		if (res_val = string_in(str2, str1)) {
			printf("FOUND at %s\n", res_val);
		}
		else {
			printf("NOT FOUND!\n");
		}
	}

	return 0;
}
char* getString(char* str, int n) {
	int i = 0;		//计数器

	if (fgets(str, n, stdin)) {
		while (str[i] != '\n' && str[i] != '\0')
			i++;
		if (str[i] == '\n')		//fgets会存储换行符，处理一下。
			str[i] = '\0';
		else while (getchar() != '\n')	//丢弃输入缓存中剩下的内容
			continue;
	}
	return str;
}

char* string_in(char* str2, char* str1) {
	char* temp2 = str2;						//两个副本指针
	char* temp1 = str1;
	int ct2 = strlen(str2), ct1 = strlen(str1);	//字符串的字符计数
	int i1 = 0, i2 = 0;		//偏移量计数器

	while (*str1) {
		if (*(temp2 + i2) == *(temp1 + i1)) {
			i2++;
			i1++;
		}
		else {
			i2++;
		}
		if (i1 == ct1)		//当第 1 个字符串的计数值等于其长度时，意味着第 2 个字符串中包含第 1 个字符串
			return str2 + i2 - i1;		//返回第 2 个字符串中第 1 个字符串开始的地址
		else if (i2 == ct2 && i1 != ct1)	//其实 && i1 != ct1 这个条件不用写，能来这个分支就表示这个意思了。
			return  NULL;
	}
	return NULL;
}