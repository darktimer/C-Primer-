#include <stdio.h>
int main(void) {
	const float inToCm = 2.54;	//1Ӣ���2.54����
	const float feetToIn = 12;	//1Ӣ�ߡ�12Ӣ��

	printf("Enter a height in centimeters(<=0 to quit):");

	float statureCm;

	scanf_s("%f", &statureCm);
	while (statureCm > 0) {
		printf("%.1f cm = %.1f feet, %.1f inches\n", statureCm, statureCm / inToCm / feetToIn, statureCm / inToCm); //�̲�ʾ���д���
		scanf_s("%f", &statureCm);
	}
	printf("bye!");

	return 0;
}