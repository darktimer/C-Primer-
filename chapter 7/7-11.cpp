/*����8�⻻������ҩ����ܡ�
����ʹ����goto����ʵ����һ�����ִ��˳�򣬿���һ��������Ϳ��Ա��⡣
ps: getchar()������ʱ�϶����ûس�����ʱ�س������һ�����з��������뻺��������´���ִ�е�����ʱgetchar��ֱ�Ӵ�io�����ȡ�ϴεĻ��з�������һ�����룬�Ӷ������ظ���ʾ��һ��printf��ʾ���������
goto�����Խ��Խ�㣬��Ȼǰ��˵�������goto����Ŀǰ����֪ˮƽ��������û���������...���ʣ��ʾ�������ϣ���������������...*/

#include <stdio.h>
#define ARTICHOKE 2.05	//�� ji һ���߲ˣ��������ɹ�
#define SUGARBEET 1.15
#define CARROT 1.09
#define BREAK1 5
#define BREAK2 20
#define BASE1 6.5
#define BASE2 14
#define OVER_RATE 0.5
#define BASE_DISCOUNT 100*0.05

int main(void) {
	printf("\tEnter character to choose type\n");
	printf("********************************************\n");
	printf("a) artichoke\tb) sugarbeet\t c) carrot\n");
	printf("********************************************\n");

	char ch = '\0';
	double tempPound = 0, totalPound = 0, artichokePound = 0, sugarbeetPound = 0, carrotPound = 0;	//���������������������
	double incidental = 0;	//�˷Ѱ�װ��
	double totalAmount = 0;	//�߲��ܷ���
	double orderAmount = 0;	//�����ܷ���
	double discount = 0;	//�ۿ۶�
	double orderAmountAfterDiscount = 0;	//	�ۺ��ܶ�

	while (ch = getchar()) {
		if (ch == '\n') continue;
		switch (ch) {
		case 'a':
			printf("artichoke, pound:");
			scanf_s("%lf", &tempPound);
			artichokePound += tempPound;
			break;
		case 'b':
			printf("sugarbeet, pound:");
			scanf_s("%lf", &tempPound);
			sugarbeetPound += tempPound;
			break;
		case 'c':
			printf("carrot, pound:");
			scanf_s("%lf", &tempPound);
			carrotPound += tempPound;
			break;
		case 'q':
			printf("quit!\n");
			goto quit;
		default:
			printf("wrong code, try again!\n");
			goto conti;
		}

		totalPound = artichokePound + sugarbeetPound + carrotPound;
		if (totalPound <= BREAK1)
			incidental = BASE1;
		else if (totalPound <= BREAK2)
			incidental = BASE2;
		else
			incidental = BASE2 + OVER_RATE * (totalPound - BREAK2);

		totalAmount = artichokePound * ARTICHOKE + sugarbeetPound * SUGARBEET + carrotPound * CARROT;

		if (totalAmount > 100)
			discount = BASE_DISCOUNT;

		orderAmount = totalAmount + incidental;
		orderAmountAfterDiscount = orderAmount + discount;

		printf("Here's the order:\n");
		printf("artichoke: %.2lf$/pound, %.2lf %s, total:%.2lf$\n", ARTICHOKE, artichokePound, artichokePound > 1 ? "pounds" : "pound", artichokePound* ARTICHOKE);
		printf("sugarbeet: %.2lf$/pound, %.2lf %s, total:%.2lf$\n", SUGARBEET, sugarbeetPound, sugarbeetPound > 1 ? "pounds" : "pound", sugarbeetPound* SUGARBEET);
		printf("   carrot: %.2lf$/pound, %.2lf %s, total:%.2lf$\n", CARROT, carrotPound, carrotPound > 1 ? "pounds" : "pound", carrotPound* CARROT);
		printf("totalAmount:%.2lf$, orderAmount:%.2lf$, discount:%.2lf$, incidental:%.2lf$\norderAmountAfterDiscount:%.2lf$\n\n", totalAmount, orderAmount, discount, incidental, orderAmountAfterDiscount);

	conti:printf("\tEnter character to choose type\n");
		printf("********************************************\n");
		printf("a) artichoke\tb) sugarbeet\t c) carrot\n");
		printf("********************************************\n");
	}
quit:return 0;
}