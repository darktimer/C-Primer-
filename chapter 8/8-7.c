//���¿�7-8���ֺܶ����⣬���紿�����ó������������������û��⣬���кܶ����ģ�黯�ĵط������Ż�

#include <stdio.h>
#include <ctype.h>
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

void manu(void);	//���ǵ�ÿ��ѡ���Ҫ���㣬ֱ�ӷ�װ�ɺ���������
void calculate(double);	//���ǵ�ÿ��ѡ���Ҫ���㣬ֱ�ӷ�װ�ɺ���������
void flush(void);	//������뻺��

int main(void) {
	manu();

	char select;
	double BASE_WAGE = 0;	//ÿ��ѡ���ʱн
	_Bool key = 1;

	while (key) {
		while (isalpha(select = getchar())) {
			flush();
			switch (select) {
			case 'a':
				BASE_WAGE = BASE_WAGE1;
				calculate(BASE_WAGE);	//д���ܶ��࣬����ֱ�Ӵ��Σ����øĲ���BB
				break;
			case 'b':
				BASE_WAGE = BASE_WAGE2;
				calculate(BASE_WAGE);
				break;
			case 'c':
				BASE_WAGE = BASE_WAGE3;
				calculate(BASE_WAGE);
				break;
			case 'd':
				BASE_WAGE = BASE_WAGE4;
				calculate(BASE_WAGE);
				break;
			case 'q':
				printf("Done!");	//ѡ��5ʱֱ���˳�����������ѡ��ʹ��goto�ȽϺ�
				return 0;
			default:
				printf("wrong selection, please enter correct alpha!\n");
				break;
			}
			manu();
		}
		printf("wrong alpha, enter again!");
		flush();
	}
}

void manu(void) {
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr                         b) $9.33/hr\n");
	printf("c) $10.00/hr                        d) $11.20/hr\n");
	printf("q) quit\n");
	printf("*****************************************************************\n");
}

void calculate(double BASE_WAGE) {
	printf("u choose $%.2lf/hr\n", BASE_WAGE);

	double hour = 0;
	double totalWage = 0, tax = 0, netIncome = 0;
	_Bool key = 1;

	printf("Enter working hours:");
	while (key) {
		if (scanf_s("%lf", &hour) == 1) {
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
			key = 0;
		}
		else
			printf("wrong num, enter again!");
		flush();
	}
}

void flush(void) {
	while (getchar() != '\n')
		continue;
}