#include <stdio.h>
int main(int argc, char* argv[]) {
	int count;

	printf("The command line has %d arguments:\n", argc - 1);
	for (count = 1; count < argc; count++)
		printf("%d: %s\n", count, argv[count]);
	printf("\n");
	
	return 0;
}
//vs2019���Է�������Ŀ����������� ���ԡ����ԡ�����������ǵ����ֻ�Ƕ���� .c �ĵ�������Ӱ������ .c Ҫ��ԭ��