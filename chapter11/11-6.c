/*�ⲻ�Ǻ͵�5��һ������ֱ����strchr��������ʲô���г�*/
#include <stdio.h>
#include <string.h>
#define SIZE 99
#define TRUE 1
#define FALSE 0

int is_within(char, char*);

int main(void) {
	char target = '\0';
	char str[SIZE] = { '\0' };

	printf("Enter target character & str separate by one space:\n");
	while (scanf_s("%c%s", &target, sizeof(target), str, sizeof(str))) {
		if (is_within(target, str))
			printf("FOUND\n");
		else
			printf("NOT FOUND!\n");
		while (getchar() != '\n')			// û�����������뻺��Ļ�����һ�������ַ�����β�� \n �������һ������� target ��
			continue;						// �� %c �Ǹ����ո񶼲��Ź���ռλ������ȻҲ����Ź� \n
		printf("Enter target character & str separate by one space:\n");
	}
	return 0;
}
int is_within(char target, char* str) {
	char* result = strchr(str, target);

	if (result)
		return TRUE;
	else
		return FALSE;
}