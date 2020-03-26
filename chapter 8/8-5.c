//未做非法输入处理，别问，问就是懒
#include <stdio.h>

int main(void) {
	int left = 0, right = 100, middle = 50;
	_Bool key = 1;
	int answer = 0;
	char compare = '\0';
	int ch = 0;

	printf("pick num between 0~100,and answer console "
		"guessing num is true or not until it gets correct answer.\n"
		"0 false, 1 true.\n");
	printf("is it %d ?\n", middle);
	while (key) {
		scanf_s("%d", &ch);
		switch (ch) {
		case 0:
			printf("if bigger input 'b',if smaller input 's':");
			while (getchar() != '\n')	//跳过剩余输入行
				continue;
			scanf_s("%c", &compare, sizeof(compare));
			if (compare == 'b') {
				left = middle;
				middle = (middle + right) / 2;
			}
			else if (compare == 's') {
				right = middle;
				middle = (middle + left) / 2;
			}
			printf("is it %d ?\n", middle);
			break;
		case 1:
			key = 0;
			break;
		default:
			printf("wrong input, again!\n");
			break;
		}
		
	}
	printf("Done! u pick %d !", middle);

	return 0;
}