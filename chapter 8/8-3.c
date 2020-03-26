#include <stdio.h>
#include <ctype.h>

int main(void) {
	int upperCount = 0, lowerCount = 0;
	int ch = 0;

	while ((ch = getchar()) != EOF) {
		if (islower(ch))
			lowerCount++;
		if (isupper(ch))
			upperCount++;
	}
	printf("Num of upper: %d , Num of lower: %d .", upperCount, lowerCount);

	return 0;
}