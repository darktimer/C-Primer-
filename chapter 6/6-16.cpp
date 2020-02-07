#include <stdio.h>
#include <math.h>
#define BASE_FOUND 100
#define SIMPLE_INTEREST 0.1
#define COMPOUND_INTEREST 0.05
#define BASE_YEAR 1

int main(void) {
	double totalDaphne = 0, totalDeirdre = 0;	//���ⲻ���������Ƿ������⣬��������ʽ��ܶ�
	int i = 1;

	do {
		totalDaphne = i * BASE_FOUND * SIMPLE_INTEREST + BASE_FOUND;
		totalDeirdre = BASE_FOUND * pow((1 + COMPOUND_INTEREST), i);
		i++;
	} while (totalDaphne > totalDeirdre);
	printf("After %d years, Deirdre's totalInterest would surpass Daphne's.", --i);

	return 0;
}