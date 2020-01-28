#include <stdio.h>

void Temperatures(double);

int main(void) {
	double fahrenheit = 0;  //�����¶�

	printf("Enter fahrenheit:");
	while (scanf_s("%lf", &fahrenheit) == 1) {	//�����õ��˱���֪ʶ�㣺������
		Temperatures(fahrenheit);
	}

	return 0;
}
void Temperatures(double f) {
	const double absoluteTemperature = 273.15;  //�����±�
	const double k = 5.0 / 9.0;  //ϵ��
	const double freezingPoint = 32.0;  //ˮ�ı���
	double centigrade = 0, kelvin = 0;

	centigrade = k * (f - freezingPoint);
	kelvin = centigrade + absoluteTemperature;
	printf("u input %.2lf fahrenheit = %.2lf centigrade = %.2lf kelvin\n", f, centigrade, kelvin);
}