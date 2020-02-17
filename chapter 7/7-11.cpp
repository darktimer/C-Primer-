/*跟第8题换汤不换药，丑拒。
无奈使用了goto，其实调整一下语句执行顺序，控制一下输入检测就可以避免。
ps: getchar()在输入时肯定会敲回车，此时回车会产生一个换行符留在输入缓存里，所以下次再执行到输入时getchar会直接从io缓存读取上次的换行符而跳过一次输入，从而出现重复显示那一堆printf提示语句的情况。
goto真的是越用越香，虽然前面说最好少用goto，但目前的认知水平来看，还没引起大问题...别问，问就是懒。希望会早点主动改正...*/

#include <stdio.h>
#define ARTICHOKE 2.05	//洋蓟 ji 一种蔬菜，长的像松果
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
	double tempPound = 0, totalPound = 0, artichokePound = 0, sugarbeetPound = 0, carrotPound = 0;	//输入重量、各类重量标记
	double incidental = 0;	//运费包装费
	double totalAmount = 0;	//蔬菜总费用
	double orderAmount = 0;	//订单总费用
	double discount = 0;	//折扣额
	double orderAmountAfterDiscount = 0;	//	折后总额

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