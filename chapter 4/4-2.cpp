#include <stdio.h>
#include <string.h>
int main(void) {
	char name[20] = "";
	
	printf("------------------------\n");
	printf("Enter name like: SabrinaCarpenter\n");
	printf("------------------------\n");
	scanf_s("%s", name, sizeof(name));
	printf("------------------------\n");
	printf("A----------------\"%s\"\n", name);
	printf("B----------------\"%20s\"\n", name);
	printf("C----------------\"%-20s\"\n", name);

	int length = strlen(name) + 3;

	printf("D----------------%*s\n",length,name);//printf()��*�����ֶο�ȣ�scanf()�б�ʾ�������
	
	return 0;
}