#include <stdio.h>

int main(void) {

	double quarts, H2O;

	printf("Enter quarts:");
	scanf_s("%lf", &quarts);

	H2O = quarts * 950 / 3.0E-23;		//!这里*运算符是基于4字节的，如果开始声明为float运算结果会被截断，虽然不要求精度，但还是声明成double省事。浮点常数默认是double，后加f才会强制转换成float。

	printf("corresponding number of H2O is %e", H2O);

	return 0;
}