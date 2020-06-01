#include <stdio.h>
#define MAX 20
char* s_gets(char*, int);

int main(vodi) {
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;

	puts("Enter your first name:");
	s_gets(first, MAX);
	puts("Enter you last name:");
	s_gets(last, MAX);
	puts("Enter you prize money:");
	scanf_s("%lf", &prize);
	sprintf_s(formal, 2 * MAX + 10 - 1, "%s, %-19s: $%6.2f\n", last, first, prize);
	puts(formal);

	return 0;
}

char* s_gets(char* st, int n) {
	char* ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else while (getchar() != '\n')
			continue;
	}
	return ret_val;
}