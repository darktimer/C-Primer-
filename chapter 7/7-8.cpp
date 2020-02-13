#include <stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 450
#define BASE_WAGE1 8.75
#define BASE_WAGE2 9.33
#define BASE_WAGE3 10.00
#define BASE_WAGE4 11.20
#define BASE_HOUR 40
#define HOUR_RATE 1.5
#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))

void calculate(double);	//考虑到每次选择后都要运算，直接封装成函数盘它。

int main(void) {
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                         2) $9.33/hr\n");
	printf("3) $10.00/hr                        4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");

	int select = 0;
	double BASE_WAGE = 0;	//每次选择的时薪

	while (scanf_s("%d", &select)) {
		switch (select) {
		case 1:
			BASE_WAGE = BASE_WAGE1;
			calculate(BASE_WAGE);	//写法很多余，可以直接传参，懒得改不多BB
			break;
		case 2:
			BASE_WAGE = BASE_WAGE2;
			calculate(BASE_WAGE);
			break;
		case 3:
			BASE_WAGE = BASE_WAGE3;
			calculate(BASE_WAGE);
			break;
		case 4:
			BASE_WAGE = BASE_WAGE4;
			calculate(BASE_WAGE);
			break;
		case 5:
			goto quit;	//选择5时直接退出而不是重新选择，使用goto比较好
		default:
			printf("wrong selection, please enter correct num!\n");
			break;
		}

		printf("*****************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr                         2) $9.33/hr\n");
		printf("3) $10.00/hr                        4) $11.20/hr\n");
		printf("5) quit\n");
		printf("*****************************************************************\n");
	}
	quit: printf("Done!");

	return 0;
}
void calculate(double BASE_WAGE) {
	printf("u choose $%.2lf/hr\n", BASE_WAGE);

	double hour = 0;
	double totalWage = 0, tax = 0, netIncome = 0;

	printf("Enter working hours:");
	scanf_s("%lf", &hour);
	if (hour <= 40) {
		totalWage = hour * BASE_WAGE;
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