#include <stdio.h>
int main(void) {
	printf("Enter character:");

	char input, tempA = 'A';
	int index;							//������ĸ��26����ĸ�е����
	int row, blank, lineUp, lineDown;

	while (scanf_s("%c", &input,sizeof(input))) {
		index = input - tempA + 1;
		for (row = 1; row <= index; row++) {
			for (blank = 0; blank < index - row; blank++)	//index�Ϳո����������������Թ�ϵ index-row=blank
				printf(" ");

			//���һ����ĸ������index�������Թ�ϵ count=2*index-1=2*row-1
			for (lineUp = 1; lineUp <= row; lineUp++)		//ÿ����������������������Թ�ϵ lineUp=row
				printf("%c", tempA - 1 + lineUp);			//ʹ�á�A������������ַ���ע�⣡�����ò�ѭ����lineUp��+1
			for (lineDown = 1; lineDown <= row - 1; lineDown++)	//ÿ�н�������������������Թ�ϵ lineDown=row-1
				printf("%c", tempA - 1 + lineUp - 1 - lineDown);//ʹ����������һ���ַ�����������ַ���ע�⣡�����lineUp���Ѿ��Զ�+1�ģ�������Ҫ��1��ȥ��tempA - 1 + lineUp - 1������������һ���ַ�
			printf("\n");
		}
		printf("Enter character:");			//�����ڿ���̨������������Σ�����һ��scanf�����������⣬Ŀǰ֪ʶ����ԭ��δ֪
	}

	return 0;
}