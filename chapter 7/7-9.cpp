#include <stdio.h>
#include <math.h>

int main(void) {
	int input = 0;
	int i = 0, j = 0;

call: printf("Enter a integer ( > 0 ):");
	while (scanf_s("%d", &input)) {
		if (input <= 0) {
			printf("Not qualified, only if integer > 0.\n");
			goto call;
		}
		/*素数：大于1的数，除了1和本身，不能被任何数整除的数就叫素数，也叫质数。
		0和1既不是素数也不是合数，合数是指除了1和它本身2个因数外，还含有其它因数的数，也就是说合数至少有3个因数。
		判断素数是非常基础又重要的算法，一般有两种思路：
		1）m被2~m-1每个整数除，如果都不能被整除，那么m就是素数。
		2）m被2~sqrt(m)每个整数除，如果都不能被整除，那么m就是素数。
			sqrt(m)是这样得来的：在1）中的2~m-1作除法发现，该区间可以分为2个，2~sqrt(m)和sqrt(m)~m-1，在两个区间求得的m的两个因数实际上就相当于3*4=4*3=12，所以可以不用求2~m-1，只需要求到sqrt(m)就行，后面的区间求得的因数只不过是前面区间因数的对应因数。
		*/
		for (i = 2; i <= input; i++) {
			for (j = 2; j < sqrt(i); j++)	//sqrt()函数的参数类型是double，使用时最好转换一下
				if (i % j == 0)
					break;
			if (j > sqrt(i))
				printf("%d is a prime\n", i);
		}
		goto call;
	}
	return 0;
}