#include <stdio.h>
#include <ctype.h>
#define CIRCLE 8
int main(void) {
	char ch = '\0';
	int count = 0;

	while ((ch = getchar()) != '#') {
		if (isalpha(ch)) {
			printf("%c:%d|", ch, ch);	//�����и��ӣ����������ʱ���ûس�Ҳ������س���ascii:10,����ֱ��ʹ�ú����ж��Ƿ�����ĸ
			count++;	//����ļ���ֱ������#�Ż����ã����Է����������ַ��������������¿�ʼ�����Ի���ֲ���8�����е�����
		}
		if (count % CIRCLE == 0)
			printf("\n");
	}

	return 0;
}