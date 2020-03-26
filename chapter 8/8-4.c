#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch = 0, numOfWords = 0;
	int count = 0;

	while ((ch = getchar()) != EOF) {
		count++;
		if (ispunct(ch))	//跳过标点符号
			continue;
		if (isspace(ch)) {	//遇到空格，单词数加 1,字母数减 1
			numOfWords++;
			count--;
		}
	}
	printf("Number of characters per word: %.2f", (float)count / numOfWords);

	return 0;
}