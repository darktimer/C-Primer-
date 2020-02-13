/*�����ģ������ P184 7.2.3��electric.c��
�����мӰ�ʱ�������ıȽ�ģ�������Ϊ����40Сʱ��ʱ�䰴��1.5������
��hour=hour+1.5*(hour-40)
*/
#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
#define BASE_WAGE 1000
#define BASE_HOUR 40
#define HOUR_RATE 1.5
#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))

int main(void) {
	printf("Enter working hours:");

	double hour = 0;
	double totalWage = 0, tax = 0, netIncome = 0;

	while (scanf_s("%lf", &hour)) {
		if (hour <= 40) {
			totalWage = hour * BASE_WAGE;
			/*��Ҫ�����ڸ�����εĿ�˰������Ľ�������ǣ�ֻҪ�����������ޣ��Ͱ�����˰�ʿ�˰��
			���繤���ܶ�Ϊ200��˰�ʰ�300��15%�㣻
			�����ܶ�Ϊ350��˰�ʰ�300��15%���ϳ���300���ֵİ�20%��
			�����ܶ�Ϊ500��˰�ʰ�300��15%����150��20%���ϳ���450���ֵİ�25%��
			*/
			if (totalWage <= 300)
				tax = BREAK1 * RATE1;
			else if (totalWage <= 450)
				tax = BASE1 + RATE2 * (totalWage - BREAK1);
			else
				tax = BASE2 + RATE3 * (totalWage - BREAK2);
			netIncome = totalWage - tax;
		}
		else {
			hour = hour + (hour - BASE_HOUR) * HOUR_RATE;
			totalWage = hour * BASE_WAGE;
			tax = BASE2 + RATE3 * (totalWage - BREAK2);
			netIncome = totalWage - tax;
		}
		printf("totalWage = %.2lf  tax = %.2lf  netIncome = %.2lf\n", totalWage, tax, netIncome);
	}

	return 0;
}