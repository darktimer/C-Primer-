#include <stdio.h>
#include <ctype.h>

int getPosi(char);

int main(void) {
	char ch;
	while ((ch = getchar()) != EOF) {
		if (isalpha(ch)) {
			printf("in alphab at %d\n", getPosi(ch));
			printf("Enter again:");
		}
		else
			printf("%d\n", -1);
		while (getchar() != '\n')
			continue;
	}
	return 0;
}

int getPosi(char ch) {
	ch = tolower(ch);
	return ch - 'a' + 1;
}