/*��������ʵ���Ǹ��� 2 ��������ʾ���֣�
����ż������ô�ô��ݾ���ϵ��Ϊ 0 ��
������������ô�ô��ݾ���ϵ��Ϊ 1 ��
�ڼ����ݣ��պ��ǵ������ģ�012345678910�����ݹ�ĵ���������ģ�
���Եݹ�ǳ��ʺϴ�����
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
	int r = n % 2;	//��¼���һλ��������������ż���������� 1��ż���� 0

	if (n >= 2)	//��¼�����һλ���жϵ�ǰ�������Ƿ����2��������ڣ���ô˵��������λ��Ҫ����
		binary(n / 2);	//�������� if ���ж�����
	putchar(r == 0 ? '0' : '1');

	return; //ǰ��ս����� void �������д�� return;
}