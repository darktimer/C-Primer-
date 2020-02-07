#include <stdio.h>
#include <string.h>
#define SIZE 255

int main(void) {
	printf("Enter word in one line, 'enter' to end input:\n");

	char ch = getchar();
	char temp[SIZE] = { '\0' };
	int k = 0;

	while (ch != '\n') {
		temp[k++] = ch;
		ch = getchar();
	}
	for (int i = strlen(temp) - 1; i >= 0; i--)
		printf("%c", temp[i]);

	return 0;
}