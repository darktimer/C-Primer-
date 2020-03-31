#include <stdio.h>

void chline(char, int, int);

int main(void) {
	char ch;

	printf("Entern character:");
	scanf_s("%c", &ch, sizeof(char));
	printf("Enter rows and columns:");

	int i, j;

	scanf_s("%d %d", &j, &i);
	chline(ch, j, i);

	return 0;
}

void chline(char ch, int j, int i) {
	for (int rows = 0; rows < j; rows++) {
		for (int columns = 0; columns < i; columns++) {
			putchar(ch);
		}
		putchar('\n');
	}
	return;
}