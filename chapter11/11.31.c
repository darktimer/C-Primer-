#include <stdio.h>
int main(int argc, char* argv[]) {
	int count;

	printf("The command line has %d arguments:\n", argc - 1);
	for (count = 1; count < argc; count++)
		printf("%d: %s\n", count, argv[count]);
	printf("\n");
	
	return 0;
}
//vs2019调试方法：项目》解决方案名 属性》调试》命令参数。记得这个只是对这个 .c 的调整，不影响其他 .c 要复原。