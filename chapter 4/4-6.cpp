#include <stdio.h>
#include <string.h>
int main(void) {
	char fName[10] = "", lName[10] = { '\0' };	//ע���ַ�������ĳ�ʼ����ʽ�������ַ�ʽ������Ԫ�س�ʼ��Ϊ'\0',ռλ��
	printf("test:fName = %s lName = %s\n", fName, lName);
	printf("Enter firstName:");
	scanf_s("%s", fName,sizeof(fName));
	printf("\nEnter lastName:");
	scanf_s("%s", lName,sizeof(lName));
	printf("\n%s %s\n", fName, lName);

	int fLength = strlen(fName), lLength = strlen(lName);

	printf("%*d %*d\n", strlen(fName), strlen(fName), strlen(lName), strlen(lName));
	printf("\n%s %s\n", fName, lName);
	printf("%-*d %-*d\n", strlen(fName), strlen(fName), strlen(lName), strlen(lName));

	return 0;
}