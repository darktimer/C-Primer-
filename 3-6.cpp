#include <stdio.h>

int main(void) {

	double quarts, H2O;

	printf("Enter quarts:");
	scanf_s("%lf", &quarts);

	H2O = quarts * 950 / 3.0E-23;		//!����*������ǻ���4�ֽڵģ������ʼ����Ϊfloat�������ᱻ�ضϣ���Ȼ��Ҫ�󾫶ȣ�������������doubleʡ�¡����㳣��Ĭ����double�����f�Ż�ǿ��ת����float��

	printf("corresponding number of H2O is %e", H2O);

	return 0;
}