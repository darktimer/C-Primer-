#include <stdio.h>
#include <math.h>

int main(void) {
	double base, exponent;

	printf("Enter base and exponent:");
	scanf_s("%lf %lf", &base, &exponent);
	printf("result = %.2lf", pow(base, exponent));

	return 0;
}//��ϸ����һ���ⷢ���ҵĸĽ�ûë��##�޷Ǿ��Ƕ�д����if��pass