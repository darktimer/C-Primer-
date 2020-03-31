#include <stdio.h>

void chline(char, int, int);

int main(void) {
	char ch;

	printf("Entern character:");
	scanf_s("%c", &ch, sizeof(char));
	printf("Enter times and rows:");

	int i, j;

	scanf_s("%d %d", &i, &j);
	chline(ch, i, j);

	return 0;
}

void chline(char ch, int i, int j) {
	for (int rows = 0; rows < j; rows++) {
		for (int times = 0; times < i; times++) {
			putchar(ch);
		}
		putchar('\n');
	}
	return;
}