#include <stdio.h>
int main(void) {
	int num = 0;
	int even = 0, odd = 0, sumE = 0, sumO = 0;

	printf("Enter integer end by 0:");
	while (scanf_s("%d", &num)) {
		if (num == 0)
			break;
		else if (num % 2 == 0) {
			even++;
			sumE += num;
		}
		else {
			odd++;
			sumO += num;
		}
	}
	printf("even number:%d ave:%d\nodd number:%d ave:%d", even, sumE / even, odd, sumO / odd);

	return 0;
}