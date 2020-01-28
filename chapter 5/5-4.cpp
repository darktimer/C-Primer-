#include <stdio.h>
int main(void) {
	const float inToCm = 2.54;	//1Ó¢´ç¡Ö2.54ÀåÃ×
	const float feetToIn = 12;	//1Ó¢³ß¡Ö12Ó¢´ç

	printf("Enter a height in centimeters(<=0 to quit):");

	float statureCm;

	scanf_s("%f", &statureCm);
	while (statureCm > 0) {
		printf("%.1f cm = %.1f feet, %.1f inches\n", statureCm, statureCm / inToCm / feetToIn, statureCm / inToCm); //½Ì²ÄÊ¾ÀıÓĞ´íÎó¡£
		scanf_s("%f", &statureCm);
	}
	printf("bye!");

	return 0;
}