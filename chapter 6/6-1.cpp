#include <stdio.h>

int main(void) {
	char alpha[26];

	for (int i = 0; i < 26; i++) 
		scanf_s("%c", &alpha[i], sizeof(alpha[i]));	//�˴�ռλ��Ϊ%c,���Կո��enter����ռλ���´�ӡa-m��һ���ո�����ֻ����������26����ĸ��
	for (int i = 0; i < 26; i++)
		printf("%c", alpha[i]);

	return 0;
}