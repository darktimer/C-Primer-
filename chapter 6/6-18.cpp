#include <stdio.h>
#include <math.h>
#define DUNBAR_NUMBER 150

int main(void) {
	int beginNum = 5, totalPerWeek = 0;
	int i = 1;

	do {
		totalPerWeek = (beginNum - i) * 2;
		if (totalPerWeek > DUNBAR_NUMBER)
			break;
		printf("week %d, %3d friends\n", i, totalPerWeek);
		beginNum = totalPerWeek;
		i++;
	} while (totalPerWeek < DUNBAR_NUMBER);

	return 0;
}