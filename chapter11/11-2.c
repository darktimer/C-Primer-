#include <stdio.h>

int main(void) {
	char ch = getc(stdin);	//��ȡ�����ַ�,��ʹ��ѭ��Ҳ�ɴﵽ��ȡ�ַ�����Ч����

	while (!isspace(ch)) {
		putc(ch, stdout);	//��ӡ�����ַ���
		ch = getc(stdin);
	}
	return 0;
}