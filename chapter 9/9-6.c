/*
我一直以为我是个逻辑很强的人，但是这么个破题浪了我半天马德碧池，果然还是我太笨了？？？
那判断逻辑有那么难么？？？
跑通以后再看，那特么就是个小学生推理题啊
可我当时做的抓耳挠腮的.....
啧......
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
		第一版是一步到位的写法，但是在 getMin 函数中， temp2 和 temp3 的值在 getMin 执行后已经是新值，但在 printf 中还是之前的值，导致结果一直不正确
		可能是跟第八章的 8-8 那个函数传参数是从右到左的顺序有关
		我的个脑子.....
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

	*temp = *temp1 <= *temp2 ? *temp1 : *temp2;				//求最小，先比较前两个
	if (*temp == *temp1) {									//若果 temp1 <= temp2 ，比较 temp1 和 temp3
		min = *temp1 <= *temp3 ? *temp1 : *temp3;
		if (min == *temp1) {									//若果 temp1 <= temp3 ,得出 min = temp1 ，比较 temp2 和 temp3
			middle = *temp2 <= *temp3 ? *temp2 : *temp3;
			if (middle == *temp3) {									//若果 temp3 <= temp2 ，得出 temp1 < temp3 < temp2 ，交换 temp2 和 temp3
				*temp = *temp3;
				*temp3 = *temp2;
				*temp2 = *temp;
			}
			//else if (middle == *temp2) {							//若果 temp2 <= temp3 ，得出 temp1 < temp2 < temp3 ，不变
			//	printf("*temp1: %.2lf\t*temp2: %.2lf\t*temp3:%.2lf\n", *temp1, *temp2, *temp3);
			//	*temp1 = *temp1;
			//	printf("*temp1: %.2lf\n", *temp1);
			//	*temp2 = *temp2;
			//	printf("*temp2: %.2lf\n", *temp2);
			//	*temp3 = *temp3;
			//	printf("*temp3: %.2lf\n", *temp3);
			//}
		}
		else if (min == *temp3) {								//若果 temp3 < temp1 ,得出 temp3 < temp1 < temp2 ，替换 temp3 ，替换 temp2
			*temp3 = *temp2;
			*temp2 = *temp1;
		}
	}
	else if (*temp == *temp2) {								//若果 temp2 < temp1 ，比较 temp2 和 temp3
		min = *temp2 <= *temp3 ? *temp2 : *temp3;
		if (min == *temp2) {									//若果 temp2 < temp3 ，得出 min = temp2 ，比较 temp1 和 temp3
			middle = *temp1 <= *temp3 ? *temp1 : *temp3;
			if (middle == *temp1) {									//若果 temp1 < temp3 ，得出 temp2 < temp1 < temp3 ，替换 temp2
				*temp2 = *temp1;
			}
			else if (middle == *temp3) {							//若果 temp3 < temp1 ，得出 temp2 < temp3 < temp1 ，替换 temp3 和 temp2
				*temp2 = *temp3;
				*temp3 = *temp1;
			}
		}
		else if (min == *temp3) {								//若果 temp3 < temp2 ，得出 temp3 < temp2 < temp1 ，替换 temp3
			*temp3 = *temp1;
		}
	}

	return min;
}