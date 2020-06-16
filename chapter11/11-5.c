#include <stdio.h>
#include <ctype.h>
#define SIZE 99		//不做输入最大字符数控制了

char* getStr(char*, char);

int main(void) {
	char* result = NULL;	//结果指针
	char target = '\0';		//目标字符
	char str[SIZE] = { '\0' };	//输入字符串

	printf("Enter str & target character separate by one space:");			//输入-检测-正确就打印，错误就返回提示-循环输入
	while (scanf_s("%s %c", str, sizeof(str), &target, sizeof(target))) {
		if ((result = getStr(str, target))) {
			printf("Found at %s\n", result);
		}
		else {
			printf("NULL return, not Found!\n");
		}											//这里不需要清除输入缓存是因为 %s 只读取空白以外的字符
													//所以上次输入的 \n 不会读入下次输入的字符串，占位符直接跳过空白
		printf("Enter str & target character separate by one space:");
	}
	return 0;
}
char* getStr(char* str, char target) {
	char* res_val = str;		//指向输入字符串的地址

	while (*res_val) {				//在循环的过程中，res_val指向的永远是一个字符串的地址，因为它首先是个指针，其次是char型。
		if (*res_val == target) {	//而 *res_val则是一个char型变量，俗称解指针应用, 它解出来的，是res_val，指向字符串地址的，首字符
			return res_val;		//查到了，就返回此时的指针，在主函数中将打印从目标字符开始之后的字符串
		}
		else {
			res_val++;
			/*当前字符不匹配，指针指向下一位。
			你可能要问，res_val不是指向字符串地址了吗，怎么能移位？
			可以看出解应用的时候解出的是首字符。字符串的地址，其实是字符串开始的地址，并不是整个字符串存储在那一个地址上。
			字符串在内存中是一个字符一个字符存储的，而一个字符就是一个地址，字符串的地址其实是一段连续的地址，
			是因为最后一位是空字符'\0'才被判断为字符串。
			首字符的地址就是字符串开始的地址，知道了开始的地址，因为后面肯定有'\0'，
			直接用%s打印就会完整打出字符串，所以，首字符的地址也就代表了整个字符串的地址。
			指向字符串地址的指针实际上指向的是首字符的地址，是一个字符的地址，那么也就意味着这个指针是可以移位的。*/
		}
	}
	return NULL;
}
