//又是一题翻译有问题的，还目标字符串不能以空字符结尾....那我tm怎么判断那是个字符串
//这里修改题目：如果 n 大于或等于 str2 的字符数，就返回 str1 ，如果 n 的大小满足要求，就从 str2 拷贝指定个数的字符到 str1 的后面
#include <stdio.h>
#include <string.h>
#define SIZE 99

char* mystrncpy(char*, char*, int);

int main(void) {
	char str1[SIZE] = { '\0' };	//str1 是目标字符串
	char str2[SIZE] = { '\0' };	//str2 提供被截断字符串
	char* result = NULL;		//用来打印结果的字符串
	int n = 0;					//最大截断的字符数

	printf("Enter two str separate by one space and maximum num character to write:\n");
	while (scanf_s("%s%s%d", str1, sizeof(str1), str2, sizeof(str2), &n)) {
		if (result = mystrncpy(str1, str2, n)) {
			printf("result: %s\n", result);
		}
		else {
			printf("RESULT NULL!");
		}								//这里不需要清除输入缓存的原因和11-5.c一样。因为这里的两个占位符都是 %s
										//所以空白字符，包括换行符在内，都不会被 %s 读取
		printf("Enter two str separate by one space and maximum num character to write:\n");
	}
	return 0;
}
char* mystrncpy(char* str1, char* str2, int n) {
	char* res_val = str1;		//先声明一个返回结果指针指向 str1 
	char* temp = str1;			//除了返回结果指针外，再搞一个指向 str1 的副本
								//不然此时无论对 str1 还是 res_val 进行移位操作，都会丢掉源字符串 str1 的地址
	int count1 = strlen(str1), count2 = strlen(str2);//获取 str1 和 str2 的字符串长度

	if (n >= count2)
		return res_val;
	else {
		for (int i = count1, j = 0; j < n; i++, j++)
			*(temp + i) = *(str2 + j);		//实质上是数组的指针表示法进行位移操作，注意复习，第十章的内容，已经忘了
		*(temp + count1 + n) = '\0';		//把最后拷贝后形成的字符串的最后一位的再后一位设为空字符，使之形成编译器认可的字符串
		return res_val;

		/*这里在调试的时候有个现象：（要设置源数组 str1 的副本 temp 也是在这里发现的，因为每回都会丢掉源字符串的指针导致最后输出空）
			就是在每次 * (temp + i) = *(str2 + j) 执行后，str1、res_val、temp 指向的字符串都会无效
			下次赋值时又会正常显示字符序列（注意措辞，字符序列，不是字符串）
			问你为什么？？？
			因为字符串的判断条件是末尾是空字符 \0 ，而每次赋值，都会往原来的字符序列末尾添加新字符
			第一次添加新字符时覆盖了原来位置上的空字符 \0，之后的每次添加字符，末尾是没有空字符 \0 的
			所以在每次赋值后，指向字符串的指针会无效，因为那不是个字符串，末尾没有空字符 \0
			但每次赋值时又会正常显示字符序列，因为指针指向的地址依然存在，不过不是以字符串的方式显示，而是一个字符序列*/
	}
}