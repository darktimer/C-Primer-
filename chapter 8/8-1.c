#include <stdio.h>

int main(void) {

	int ch = 0;
	int count = 0;

	//��ͬ��ϵͳ֧�� EOF �ķ�����ͬ���� windows �£�����س����ڿ��а���ϼ� Ctrl + Z ,�ٻس�ȷ�ϾͿ�����
	while ((ch = getchar()) != EOF) {
		count++;
		putchar(ch);
	}

	printf("\n%d", count);

	return 0;
}