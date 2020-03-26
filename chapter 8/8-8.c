#include <stdio.h>
#include <cfloat>

void menu(void);
void flush(void);
float getFirst(void);
float getSecond(void);
void add(float, float);
void subtract(float, float);
void multiply(float, float);
void divide(float, float);

int main(void) {

	_Bool key = 1;
	char operator=0;
	float firTemp = 0, secTemp = 0;
	char ch = 0;

	while (key) {
		menu();
		operator=getchar();
		while (isspace(operator) || isdigit(operator) || isupper(operator)) {
			printf("wrong operator, enter again!");
			flush();
			operator=getchar();
		}
		switch (operator) {
		case 'a':
			add(getSecond(), getFirst());		//函数中的参数传递顺序是从右到左的....第一次发现
			break;
		case 's':
			subtract(getSecond(), getFirst());
			break;
		case 'm':
			multiply(getSecond(), getFirst());
			break;
		case 'd':		//如果第 2 个数是 0 还要开启第二个分支提醒，真的是.....想法特别健壮，非常鲁棒
			firTemp = getFirst();
			secTemp = getSecond();
			if (secTemp >= -DBL_EPSILON && secTemp <= DBL_EPSILON) {
				do {
					printf("Enter a number other than 0: ");
					scanf_s("%f", &secTemp);			//这里要是在输入不是数字的内容就无解了，来来回回好烦不写了。。2020年3月26日 16:09:39 第八章结束吧
				} while (secTemp >= -DBL_EPSILON && secTemp <= DBL_EPSILON);
			}
			divide(secTemp, firTemp);
			break;
		case 'q':
			printf("Bye");
			return 0;
		default:
			printf("wrong operator, choose again!");
			break;
		}
		flush();
	}
}

void menu(void) {
	printf("**************************************\n");
	printf("Enter the operation of your choice:\n");
	printf("a. add			s.subtract\n");
	printf("m. multiply		d.divide\n");
	printf("q. quit\n");
	printf("**************************************\n");
}

void flush(void) {
	while (getchar() != '\n')
		continue;
}

float getFirst(void) {
	float firNum = 0;
	_Bool key = 1;
	char ch = 0;

	printf("Enter first number:");
	while (key) {
		if (scanf_s("%f", &firNum)) {	//如果 scanf 获取输入失败，那么输入的内容还在缓存中。可以再用输入流获取。
			key = 0;
		}
		else {
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not a number.\n");
			printf("Please enter a number, such as 2.5, -1.78E8, or 3 :");
		}
	}
	return firNum;
}

float getSecond(void) {
	float secNum = 0;
	_Bool key = 1;
	char ch = 0;

	printf("Enter second number:");
	while (key) {
		if (scanf_s("%f", &secNum)) {
			key = 0;
		}
		else {
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not a number.\n");
			printf("Please enter a number, such as 2.5, -1.78E8, or 3 :");
		}
	}
	return secNum;
}

void add(float b, float a) {
	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}
void subtract(float b, float a) {
	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}
void multiply(float b, float a) {
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
}
void divide(float b, float a) {
	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}