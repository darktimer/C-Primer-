#include <stdio.h>
#include <ctype.h>
int main(void) {
	char ch = '\0';
	int space = 0, enter = 0, etc = 0;

	while ((ch = getchar()) != '#') {
		if (ch == ' ')	//isspace()��������հ��ַ������䶨��Ŀհ��ַ����������ո񣬻�������5�ֿ�����հ׵Ĺ��ܼ���
			space++;
		else if (ch == '\r' || ch == '\n')	//C99 isblank()�������Լ���հ��ַ������䶨��Ŀհ��ַ������ո����Tab����
			enter++;
		else
			etc++;
	}
	printf("space = %d, enter = %d, etc = %d", space, enter, etc);

	return 0;
}