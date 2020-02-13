#include <stdio.h>
int main(void) {
	char ch = '\0', preCh = '\0';
	int count = 0;

	while ((ch = getchar()) != '#') {
		if (preCh == 'e')
			if (ch == 'i')
				count++;
		preCh = ch;
	}
	printf("Receive your %d award!", count);

	return 0;
}