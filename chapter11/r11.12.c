#include <stdio.h>
#include <string.h>

char* s_gets( char*);

int main(void) {
	 char* st = "hell o";
	 char* st1 = st;//�ʼû����䣬����һֱ���ԣ�Ȼ���ֵ�ַ��ָ���ַ����ĺ�һ��λ�á�
					//Ȼ���������Է����ڱ���������stָ������ݶ������롣
					//��Ȼ���򱻵���������st��ʱ��st��Ϊ�������е�whileѭ����ӡ�Ѿ�ָ�����ַ����ĺ���һ��λ��
					//....ָ���ҷ���....Ȼ���ٻ���һ��Ӱ����...������....
					//��tm����n�෽���ж��Ǹ��ַ�����Ŀո�' '��'\0'��isspace��isblank......
					//��ס�ˣ�ָ��󷨹�Ȼ���

	while (*st1) {
		printf("%c: %p\n", *st1, st1);
		st1++;
	}
	printf("\ntarget: %p", s_gets(st));

	return 0;
}
char* s_gets( char* st) {
	char* find = NULL;

	while (st) {
		if (*st==' ') {
			find = st;
			return find;
		}
		st++;
	}
	return find;
}