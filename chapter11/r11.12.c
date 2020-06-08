#include <stdio.h>
#include <string.h>

char* s_gets( char*);

int main(void) {
	 char* st = "hell o";
	 char* st1 = st;//最开始没有这句，调试一直不对，然后发现地址总指向字符串的后一个位置。
					//然后逐语句调试发现在被调函数中st指针的内容都是乱码。
					//恍然大悟被调函数调用st的时候，st因为主函数中的while循环打印已经指向了字符串的后面一个位置
					//....指针乱飞了....然后召唤了一个影分身...就能了....
					//我tm试了n多方法判断那个字符串里的空格，' '，'\0'，isspace，isblank......
					//记住了，指针大法果然妙啊。

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