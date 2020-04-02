#include <stdio.h>

void binary(unsigned long, int);
void get_binary(unsigned long);

int main(void) {
	printf("Enter num to show in binary,(q to quit):");

	unsigned long x;
	int base;
	while (scanf_s("%lu %d", &x, &base) == 2) {
		binary(x, base);
		putchar('\n');
		printf("Enter num to show in binary,(q to quit):");
	}
	printf("Bye!");

	return 0;
}

void binary(unsigned long x, int base) {
	if (base == 8)
		printf("%#o", x);
	else if (base == 16)
		printf("%#x", x);
	else if (base == 2)
		get_binary(x);
	else
		printf("wrong input, try again.");

	return;
}

void get_binary(unsigned long n) {
	int r = n % 2;	//记录最后一位数字是奇数还是偶数，奇数是 1，偶数是 0

	if (n >= 2)	//记录好最后一位后，判断当前的数字是否大于2，如果大于，那么说明还有数位需要做除
		get_binary(n / 2);	//契合上面 if 的判断条件
	putchar(r == 0 ? '0' : '1');

	return; //前面刚讲过的 void 函数最好写上 return;
}