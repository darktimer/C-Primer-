#include <stdio.h>
int strlen_s(const char*);
int main(void) {
	const char st[] = "hello";
	printf("%d", strlen_s(st));
	return 0;
}
int strlen_s(const char* st) {
	int ct = 0;

	while (*st) {
		ct++;
		st++;
	}
	return ct;
}
/*�������࣬���£�����ָ��
while(*st++)
	ct++;
*/