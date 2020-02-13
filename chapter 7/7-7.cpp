/*此题的模范做法 P184 7.2.3的electric.c。
本题中加班时间描述的比较模糊，理解为超出40小时的时间按照1.5倍计算
即hour=hour+1.5*(hour-40)
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
			/*需要考虑在各区间段的扣税金额，这里的解决方法是，只要超过区间下限，就按区间税率扣税。
			比如工资总额为200，税率按300的15%算；
			工资总额为350，税率按300的15%加上超出300部分的按20%算
			工资总额为500，税率按300的15%加上150的20%加上超出450部分的按25%算
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