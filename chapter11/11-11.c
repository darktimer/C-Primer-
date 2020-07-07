#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ROW 10	//10 ���ַ���
#define SIZE 40	//ÿ���ַ������ 40 ���ַ�

char* getString(char*, int);			//�Զ����ȡ�ַ���
void menu(void);						//�˵�
void arrayList(char(*)[SIZE], int);		//A ��ӡ�ַ����б�
void sortByASCII(char(*)[SIZE], int);	//B �� ASCII ����
void sortByLD(char(*)[SIZE], int);		//C �����ȵ���
void sortByLOF(char(*)[SIZE], int);		//D ���׵��ʳ��ȵ���

int main(void) {
	char strs[ROW][SIZE] = { {'\0'} };	//��ʼ���ַ�������
	char op = '\0';						//�˵�ѡ��

	printf("Enter TEN strings:\n");		//��ȡ 10 ���ַ���
	for (int i = 0; i < ROW; i++)
		getString(strs[i], SIZE);	//���鰴�д洢�ַ���

	menu();	//��ʾ�˵�
	while (scanf_s("%c", &op, sizeof(op))) {
		while (getchar() != '\n')	//�����ȡ����˵�ѡ�������뻺�档
			continue;
		switch (op) {
		case 'A'://A ��ӡ�ַ����б�
			arrayList(strs, ROW);
			break;
		case 'B'://B �� ASCII ����
			sortByASCII(strs, ROW);
			break;
		case 'C'://C �����ȵ���
			sortByLD(strs, ROW);
			break;
		case 'D'://D ���׵��ʳ��ȵ���
			sortByLOF(strs, ROW);
			break;
		case 'E'://E �˳�����
			printf("\nQuit!\n");
			return 0;
		default://���� ��ʾ��ʾ
			printf("\nnegative option!\n");
			break;
		}
		printf("\n_________________________________________________________\n");
		menu();//��ʾ�˵�
	}
	return 0;
}
char* getString(char* temp, int n) {
	int i = 0;

	if (fgets(temp, n, stdin)) {					//fgets ��������� EOF ����³��
		while (temp[i] != '\0' && temp[i] != '\n')	//û�����ַ�����β���ַ����з���һֱ����
			i++;
		if (temp[i] == '\n')	//����������з����ѻ��з�����Ϊ���ַ�
			temp[i] = '\0';
		else while (getchar() != '\n')	//���ʣ�����뻺��
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
		fputs(str[i], stdout);			//ֻ��ʾ��ά������У�Ҳ���� 10 ���ַ���
		putc('\n', stdout);				//fputs �������Դ����з�
	}
	return;
}
void sortByASCII(char(*str)[SIZE], int row) {	//д�������ʱ������ѵ����ڵ��ú����Ƚ��ַ���ʱ��
	//char* str[SIZE] = { {'\0'} };				//�޷�׼ȷ������ָ���ʾ����ά�������
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