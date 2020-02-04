#include <stdio.h>
int main(void) {
	char j = 'A';
	int i, temp;
	for (i = 0; i < 6; i++) {
		for (temp = 0; temp < i + 1; temp++, j++)
			printf("%c", j);
		printf("\n");
	}

	return 0;
}