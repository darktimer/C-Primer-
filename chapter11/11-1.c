#include <stdio.h>
#define SIZE 40
int main(void) {
	char str[SIZE] = { '\0' };
	char* ret_val = NULL;

	ret_val = fgets(str, SIZE, stdin);	//�洢���з�
	if (ret_val) {
		fputs(str, stdout);	//����ӻ��з�������fgets�ѻ��з��洢���ַ����ˣ�����Ҳ��ӡ�˳�����
	}
	return 0;
}