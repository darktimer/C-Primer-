#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ROW 10	//10 行字符串
#define SIZE 40	//每行字符串最大 40 个字符

char* getString(char*, int);			//自定义获取字符串
void menu(void);						//菜单
void arrayList(char(*)[SIZE], int);		//A 打印字符串列表
void sortByASCII(char(*)[SIZE], int);	//B 按 ASCII 排序
void sortByLD(char(*)[SIZE], int);		//C 按长度递增
void sortByLOF(char(*)[SIZE], int);		//D 按首单词长度递增

int main(void) {
	char strs[ROW][SIZE] = { {'\0'} };	//初始化字符串数组
	char op = '\0';						//菜单选项

	printf("Enter TEN strings:\n");		//获取 10 个字符串
	for (int i = 0; i < ROW; i++)
		getString(strs[i], SIZE);	//数组按行存储字符串

	menu();	//显示菜单
	while (scanf_s("%c", &op, sizeof(op))) {
		while (getchar() != '\n')	//清除获取输入菜单选项后的输入缓存。
			continue;
		switch (op) {
		case 'A'://A 打印字符串列表
			arrayList(strs, ROW);
			break;
		case 'B'://B 按 ASCII 排序
			sortByASCII(strs, ROW);
			break;
		case 'C'://C 按长度递增
			sortByLD(strs, ROW);
			break;
		case 'D'://D 按首单词长度递增
			sortByLOF(strs, ROW);
			break;
		case 'E'://E 退出程序
			printf("\nQuit!\n");
			return 0;
		default://其他 显示提示
			printf("\nnegative option!\n");
			break;
		}
		printf("\n_________________________________________________________\n");
		menu();//显示菜单
	}
	return 0;
}
char* getString(char* temp, int n) {
	int i = 0;

	if (fgets(temp, n, stdin)) {					//fgets 函数本身对 EOF 做了鲁棒
		while (temp[i] != '\0' && temp[i] != '\n')	//没遇到字符串结尾空字符或换行符，一直计数
			i++;
		if (temp[i] == '\n')	//如果遇到换行符，把换行符更换为空字符
			temp[i] = '\0';
		else while (getchar() != '\n')	//清除剩余输入缓存
			continue;
		return temp;
	}
	else return NULL;
}
void menu(void) {
	printf("\n\t********************************************\n");
	printf("\t***  A.array list\tB.sort by ASCII  ***\n");
	printf("\t***  C.sort by LD\tD.sort by LOF    ***\n");
	printf("\t***                E.quit                ***\n");
	printf("\t********************************************\n");
	printf("\nWhich function...? Enter option: ");
	return;
}
void arrayList(char(*str)[SIZE], int row) {
	for (int i = 0; i < row; i++) {
		fputs(str[i], stdout);			//只显示二维数组的行，也就是 10 条字符串
		putc('\n', stdout);				//fputs 函数不自带换行符
	}
	return;
}
void sortByASCII(char(*str)[SIZE], int row) {	//写这个函数时纠结的难点在于调用函数比较字符串时，
	//char* str[SIZE] = { {'\0'} };				//无法准确快速用指针表示出二维数组的行
	char* temp = "";

	for (int i = 0; i < row - 1; i++) {
		for (int j = 1; j < row; j++) {
			if (strcmp(str[i], str[j]) > 0) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	for (int k = 0; k < row; k++)
		fputs(*str[k], stdout);
	return;
}
void sortByLD(char(*strs)[SIZE], int row) {}
void sortByLOF(char(*strs)[SIZE], int row) {}