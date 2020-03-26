#include <stdio.h>
#include <ctype.h>
//��ô�ÿ϶��������ͷ�ļ��˰ɣ�ctype.h ����һЩ�ж��ַ����͵ĺ�����

int main(void) {
	int ch = 0, count = 0;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
		if ((char)ch == '\n') {
			printf("lineBreak:\\n\t");
		}
		else if ((char)ch == '\t') {
			printf("tab:\\t\t");
		}
		else if (iscntrl((char)ch)) {
			printf("Seq:^%c\t", ch + 'A' - 1);	//���������ӣ�Ŀǰ��������������������ַ���Ҳ��������û�����⣬��ǿ���ˡ�
		}
		else {
			printf(":%d\t", (int)(char)ch);
		}
		count++;
		if (count % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}