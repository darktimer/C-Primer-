#include <stdio.h>
#include <math.h>
#define COMPOUND_INTEREST 0.08
#define	FIXED_CHARGE 10
int main(void) {
	double totalFound = 0;
	double baseFound = 100;
	int i = 0;

	do {
		//totalFound = baseFound * pow((1 + COMPOUND_INTEREST), i) - FIXED_CHARGE;需要一年一年算，低级错误....
		totalFound = baseFound * (1 + COMPOUND_INTEREST) - FIXED_CHARGE;
		baseFound = totalFound;
		i++;
	} while (totalFound > 0);
	printf("After %d years insufficient balance!", i);

	return 0;
}