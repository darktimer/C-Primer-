#define SIZE 99
#include <stdio.h>
#include <string.h>
int main(void) {
	char input[SIZE] = { 0 }, ch = '\0';		//�����ַ����飬Ϊ����Ƚϳ��Ⱥ��пգ�һ��Ҫ���ɳ�ʼ����ϰ�ߡ�
	int i = 0, length = 0;

	printf("Enter a word('enter' end):");
	while ((ch = getchar()) != '\n')
		input[i++] = ch;
	length = strlen(input);
	printf("last mem:%c\tlength: %d\tsizeof:%zd\n", input[i],length,sizeof(input));		//ע��strlen()��sizeof()������strlen���������ַ���sizeof�������ַ�
	for (i = length - 1; i >= 0; i--)
		printf("%c", input[i]);
	
	return 0;
}