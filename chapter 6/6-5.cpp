#include <stdio.h>
int main(void) {
	printf("Enter character:");

	char input, tempA = 'A';
	int index;							//输入字母在26个字母中的序号
	int row, blank, lineUp, lineDown;

	while (scanf_s("%c", &input,sizeof(input))) {
		index = input - tempA + 1;
		for (row = 1; row <= index; row++) {
			for (blank = 0; blank < index - row; blank++)	//index和空格数、行数存在线性关系 index-row=blank
				printf(" ");

			//最后一行字母总数和index存在线性关系 count=2*index-1=2*row-1
			for (lineUp = 1; lineUp <= row; lineUp++)		//每行升序个数和行数存在线性关系 lineUp=row
				printf("%c", tempA - 1 + lineUp);			//使用‘A’来控制输出字符。注意！跳出该层循环后lineUp会+1
			for (lineDown = 1; lineDown <= row - 1; lineDown++)	//每行降序个数和行数存在线性关系 lineDown=row-1
				printf("%c", tempA - 1 + lineUp - 1 - lineDown);//使用升序的最后一个字符来控制输出字符。注意！这里的lineUp是已经自动+1的，所以需要把1减去，tempA - 1 + lineUp - 1才是升序的最后一个字符
			printf("\n");
		}
		printf("Enter character:");			//这里在控制台会连续输出两次，跳过一次scanf函数的输入检测，目前知识所限原因未知
	}

	return 0;
}