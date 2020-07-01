#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ROW 10
#define SIZE 40

char* getString(char*, int);
void menu(void);
void arrayList(char[][SIZE], int);		//A 打印字符串列表
void sortByASCII(char[][SIZE], int);	//B 按 ASCII 排序
void sortByLD(char[][SIZE], int);		//C 按长度递增
void sortByLOF(char[][SIZE], int);		//D 按首单词长度递增

int main(void) {
	char strs[ROW][SIZE] = { {'\0'} };
	char op = '\0';						//菜单选项

	printf("Enter TEN strings:\n");		//获取 10 个字符串
	for (int i = 0; i < ROW; i++)
		getString(strs[i], SIZE);

	menu();
	while (scanf_s("%c", &op, sizeof(op))) {
		while (getchar() != '\n')
			continue;
		switch (op) {
		case 'A':
			arrayList(strs, ROW);
			break;
		case 'B':
			sortByASCII(strs, ROW);
			break;
		case 'C':
			sortByLD(strs, ROW);
			break;
		case 'D':
			sortByLOF(strs, ROW);
			break;
		case 'E':
			printf("\nQuit!\n");
			return 0;
		default:
			printf("\nnegative option!\n");
			break;
		}
		printf("\n_________________________________________________________\n");
		menu();
	}
	return 0;
}
char* getString(char* temp, int n) {
	int i = 0;

	if (fgets(temp, n, stdin)) {					//fgets 函数本身对 EOF 做了鲁棒
		while (temp[i] != '\0' && temp[i] != '\n')
			i++;
		if (temp[i] == '\n')
			temp[i] = '\0';
		else while (getchar() != '\n')
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
void arrayList(char strs[][SIZE], int row) {
	for (int i = 0; i < row; i++) {
		fputs(strs[i], stdout);
		putc('\n', stdout);
	}
	return;
}
void sortByASCII(char strs[][SIZE], int row) {

}
void sortByLD(char strs[][SIZE], int row) {}
void sortByLOF(char strs[][SIZE], int row) {}