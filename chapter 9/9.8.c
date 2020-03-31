/*二进制其实就是根据 2 的幂来表示数字，
若是偶数，那么该次幂就是系数为 0 ，
若是奇数，那么该次幂就是系数为 1 。
第几次幂，刚好是倒着数的，012345678910，跟递归的倒序是相符的，
所以递归非常适合处理倒序。
*/
#include <stdio.h>

void binary(unsigned long);

int main(void) {
	printf("Enter num to show in binary,(q to quit):");

	unsigned long n;
	while (scanf_s("%lu", &n) == 1) {
		binary(n);
		putchar('\n');
		printf("Enter num to show in binary,(q to quit):");
	}
	printf("Bye!");

	return 0;
}

void binary(unsigned long n) {
	int r = n % 2;	//记录最后一位数字是奇数还是偶数，奇数是 1，偶数是 0

	if (n >= 2)	//记录好最后一位后，判断当前的数字是否大于2，如果大于，那么说明还有数位需要做除
		binary(n / 2);	//契合上面 if 的判断条件
	putchar(r == 0 ? '0' : '1');

	return; //前面刚讲过的 void 函数最好写上 return;
}