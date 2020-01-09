#include <stdio.h>
#include <string.h>
int main(void) {
	char fName[10] = "", lName[10] = { '\0' };	//注意字符串数组的初始化方式，这两种方式将所有元素初始化为'\0',占位符
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