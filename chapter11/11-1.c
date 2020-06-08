#include <stdio.h>
#define SIZE 40
int main(void) {
	char str[SIZE] = { '\0' };
	char* ret_val = NULL;

	ret_val = fgets(str, SIZE, stdin);	//存储换行符
	if (ret_val) {
		fputs(str, stdout);	//不添加换行符，但是fgets把换行符存储到字符串了，所以也打印了出来。
	}
	return 0;
}