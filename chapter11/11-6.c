/*这不是和第5题一样吗，那直接用strchr不香吗，造什么自行车*/
#include <stdio.h>
#include <string.h>
#define SIZE 99
#define TRUE 1
#define FALSE 0

int is_within(char, char*);

int main(void) {
	char target = '\0';
	char str[SIZE] = { '\0' };

	printf("Enter target character & str separate by one space:\n");
	while (scanf_s("%c%s", &target, sizeof(target), str, sizeof(str))) {
		if (is_within(target, str))
			printf("FOUND\n");
		else
			printf("NOT FOUND!\n");
		while (getchar() != '\n')			// 没有这个清除输入缓存的话，上一次输入字符串结尾的 \n 会读到下一次输入的 target 里
			continue;						// 而 %c 是个连空格都不放过的占位符，当然也不会放过 \n
		printf("Enter target character & str separate by one space:\n");
	}
	return 0;
}
int is_within(char target, char* str) {
	char* result = strchr(str, target);

	if (result)
		return TRUE;
	else
		return FALSE;
}