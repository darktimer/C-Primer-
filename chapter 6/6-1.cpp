#include <stdio.h>

int main(void) {
	char alpha[26];

	for (int i = 0; i < 26; i++) 
		scanf_s("%c", &alpha[i], sizeof(alpha[i]));	//此处占位符为%c,所以空格和enter都会占位导致打印a-m带一个空格。所以只能连续输完26个字母。
	for (int i = 0; i < 26; i++)
		printf("%c", alpha[i]);

	return 0;
}