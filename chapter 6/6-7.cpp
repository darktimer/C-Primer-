#define SIZE 99
#include <stdio.h>
#include <string.h>
int main(void) {
	char input[SIZE] = { 0 }, ch = '\0';		//碰到字符数组，为方便比较长度和判空，一定要养成初始化的习惯。
	int i = 0, length = 0;

	printf("Enter a word('enter' end):");
	while ((ch = getchar()) != '\n')
		input[i++] = ch;
	length = strlen(input);
	printf("last mem:%c\tlength: %d\tsizeof:%zd\n", input[i],length,sizeof(input));		//注意strlen()和sizeof()的区别，strlen不包含空字符，sizeof包括空字符
	for (i = length - 1; i >= 0; i--)
		printf("%c", input[i]);
	
	return 0;
}