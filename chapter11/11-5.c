#include <stdio.h>
#include <ctype.h>
#define SIZE 99		//������������ַ���������

char* getStr(char*, char);

int main(void) {
	char* result = NULL;	//���ָ��
	char target = '\0';		//Ŀ���ַ�
	char str[SIZE] = { '\0' };	//�����ַ���

	printf("Enter str & target character separate by one space:");			//����-���-��ȷ�ʹ�ӡ������ͷ�����ʾ-ѭ������
	while (scanf_s("%s %c", str, sizeof(str), &target, sizeof(target))) {
		if ((result = getStr(str, target))) {
			printf("Found at %s\n", result);
		}
		else {
			printf("NULL return, not Found!\n");
		}											//���ﲻ��Ҫ������뻺������Ϊ %s ֻ��ȡ�հ�������ַ�
													//�����ϴ������ \n ��������´�������ַ�����ռλ��ֱ�������հ�
		printf("Enter str & target character separate by one space:");
	}
	return 0;
}
char* getStr(char* str, char target) {
	char* res_val = str;		//ָ�������ַ����ĵ�ַ

	while (*res_val) {				//��ѭ���Ĺ����У�res_valָ�����Զ��һ���ַ����ĵ�ַ����Ϊ�������Ǹ�ָ�룬�����char�͡�
		if (*res_val == target) {	//�� *res_val����һ��char�ͱ������׳ƽ�ָ��Ӧ��, ��������ģ���res_val��ָ���ַ�����ַ�ģ����ַ�
			return res_val;		//�鵽�ˣ��ͷ��ش�ʱ��ָ�룬���������н���ӡ��Ŀ���ַ���ʼ֮����ַ���
		}
		else {
			res_val++;
			/*��ǰ�ַ���ƥ�䣬ָ��ָ����һλ��
			�����Ҫ�ʣ�res_val����ָ���ַ�����ַ������ô����λ��
			���Կ�����Ӧ�õ�ʱ�����������ַ����ַ����ĵ�ַ����ʵ���ַ�����ʼ�ĵ�ַ�������������ַ����洢����һ����ַ�ϡ�
			�ַ������ڴ�����һ���ַ�һ���ַ��洢�ģ���һ���ַ�����һ����ַ���ַ����ĵ�ַ��ʵ��һ�������ĵ�ַ��
			����Ϊ���һλ�ǿ��ַ�'\0'�ű��ж�Ϊ�ַ�����
			���ַ��ĵ�ַ�����ַ�����ʼ�ĵ�ַ��֪���˿�ʼ�ĵ�ַ����Ϊ����϶���'\0'��
			ֱ����%s��ӡ�ͻ���������ַ��������ԣ����ַ��ĵ�ַҲ�ʹ����������ַ����ĵ�ַ��
			ָ���ַ�����ַ��ָ��ʵ����ָ��������ַ��ĵ�ַ����һ���ַ��ĵ�ַ����ôҲ����ζ�����ָ���ǿ�����λ�ġ�*/
		}
	}
	return NULL;
}
