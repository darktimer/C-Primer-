#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void) {

	char temp = get_first();
	printf("%c", temp);

	return 0;
}

char get_first(void) {
	int ch;

	while (isspace(ch = getchar())) {
		continue;
	}

	return ch;
}