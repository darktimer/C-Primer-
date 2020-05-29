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
	int r = n % 2;	//��¼���һλ��������������ż���������� 1��ż���� 0

	if (n >= 2)	//��¼�����һλ���жϵ�ǰ�������Ƿ����2��������ڣ���ô˵��������λ��Ҫ����
		get_binary(n / 2);	//�������� if ���ж�����
	putchar(r == 0 ? '0' : '1');

	return; //ǰ��ս����� void �������д�� return;
}