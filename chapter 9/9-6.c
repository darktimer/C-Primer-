/*
��һֱ��Ϊ���Ǹ��߼���ǿ���ˣ�������ô�����������Ұ�����±̳أ���Ȼ������̫���ˣ�����
���ж��߼�����ô��ô������
��ͨ�Ժ��ٿ�������ô���Ǹ�Сѧ�������Ⱑ
���ҵ�ʱ����ץ��������.....
��......
*/
#include <stdio.h>

double getMin(double*, double*, double*);

int main(void) {
	printf("Enter three double:");

	double temp1, temp2, temp3;
	double min;

	while (scanf_s("%lf %lf %lf", &temp1, &temp2, &temp3) == 3) {
		/*
		printf("min: %.2lf, middle: %.2lf, max: %.2lf\n", getMin(&temp1, &temp2, &temp3), temp2, temp3);
		��һ����һ����λ��д���������� getMin �����У� temp2 �� temp3 ��ֵ�� getMin ִ�к��Ѿ�����ֵ������ printf �л���֮ǰ��ֵ�����½��һֱ����ȷ
		�����Ǹ��ڰ��µ� 8-8 �Ǹ������������Ǵ��ҵ����˳���й�
		�ҵĸ�����.....
		*/
		min = getMin(&temp1, &temp2, &temp3);
		printf("min: %.2lf, middle: %.2lf, max: %.2lf\n", min, temp2, temp3);
		printf("Enter three double:");
	}

	return 0;
}

double getMin(double* temp1, double* temp2, double* temp3) {
	double min, middle, max = 0;
	double* temp = &max;

	*temp = *temp1 <= *temp2 ? *temp1 : *temp2;				//����С���ȱȽ�ǰ����
	if (*temp == *temp1) {									//���� temp1 <= temp2 ���Ƚ� temp1 �� temp3
		min = *temp1 <= *temp3 ? *temp1 : *temp3;
		if (min == *temp1) {									//���� temp1 <= temp3 ,�ó� min = temp1 ���Ƚ� temp2 �� temp3
			middle = *temp2 <= *temp3 ? *temp2 : *temp3;
			if (middle == *temp3) {									//���� temp3 <= temp2 ���ó� temp1 < temp3 < temp2 ������ temp2 �� temp3
				*temp = *temp3;
				*temp3 = *temp2;
				*temp2 = *temp;
			}
			//else if (middle == *temp2) {							//���� temp2 <= temp3 ���ó� temp1 < temp2 < temp3 ������
			//	printf("*temp1: %.2lf\t*temp2: %.2lf\t*temp3:%.2lf\n", *temp1, *temp2, *temp3);
			//	*temp1 = *temp1;
			//	printf("*temp1: %.2lf\n", *temp1);
			//	*temp2 = *temp2;
			//	printf("*temp2: %.2lf\n", *temp2);
			//	*temp3 = *temp3;
			//	printf("*temp3: %.2lf\n", *temp3);
			//}
		}
		else if (min == *temp3) {								//���� temp3 < temp1 ,�ó� temp3 < temp1 < temp2 ���滻 temp3 ���滻 temp2
			*temp3 = *temp2;
			*temp2 = *temp1;
		}
	}
	else if (*temp == *temp2) {								//���� temp2 < temp1 ���Ƚ� temp2 �� temp3
		min = *temp2 <= *temp3 ? *temp2 : *temp3;
		if (min == *temp2) {									//���� temp2 < temp3 ���ó� min = temp2 ���Ƚ� temp1 �� temp3
			middle = *temp1 <= *temp3 ? *temp1 : *temp3;
			if (middle == *temp1) {									//���� temp1 < temp3 ���ó� temp2 < temp1 < temp3 ���滻 temp2
				*temp2 = *temp1;
			}
			else if (middle == *temp3) {							//���� temp3 < temp1 ���ó� temp2 < temp3 < temp1 ���滻 temp3 �� temp2
				*temp2 = *temp3;
				*temp3 = *temp1;
			}
		}
		else if (min == *temp3) {								//���� temp3 < temp2 ���ó� temp3 < temp2 < temp1 ���滻 temp3
			*temp3 = *temp1;
		}
	}

	return min;
}