#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch = 0, numOfWords = 0;
	int count = 0;

	while ((ch = getchar()) != EOF) {
		count++;
		if (ispunct(ch))	//����������
			continue;
		if (isspace(ch)) {	//�����ո񣬵������� 1,��ĸ���� 1
			numOfWords++;
			count--;
		}
	}
	printf("Number of characters per word: %.2f", (float)count / numOfWords);

	return 0;
}