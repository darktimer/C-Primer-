#include <stdio.h>
int main(void) {
	int i, temp;
	char j;
	for (i = 0; i < 6; i++) {
		for (j = 'F', temp = 0; temp < i + 1; temp++, j--)
			printf("%c", j);
		printf("\n");
	}

	return 0;
}