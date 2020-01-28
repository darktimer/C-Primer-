#include <stdio.h>
int main(void) {
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");

	int secondOperand = 0, firstOperand = 0;

	scanf_s("%d", &secondOperand);
	printf("Now enter the first operand:");
	scanf_s("%d", &firstOperand);
	while (firstOperand != 0) {
		printf("%d %% %d is %d\n", firstOperand, secondOperand, firstOperand % secondOperand);
		printf("Enter next number for first operand( < = 0 to quit):");
		scanf_s("%d", &firstOperand);

	}
	printf("done!");

	return 0;
}