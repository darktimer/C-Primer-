//����һ�ⷭ��������ģ���Ŀ���ַ��������Կ��ַ���β....����tm��ô�ж����Ǹ��ַ���
//�����޸���Ŀ����� n ���ڻ���� str2 ���ַ������ͷ��� str1 ����� n �Ĵ�С����Ҫ�󣬾ʹ� str2 ����ָ���������ַ��� str1 �ĺ���
#include <stdio.h>
#include <string.h>
#define SIZE 99

char* mystrncpy(char*, char*, int);

int main(void) {
	char str1[SIZE] = { '\0' };	//str1 ��Ŀ���ַ���
	char str2[SIZE] = { '\0' };	//str2 �ṩ���ض��ַ���
	char* result = NULL;		//������ӡ������ַ���
	int n = 0;					//���ضϵ��ַ���

	printf("Enter two str separate by one space and maximum num character to write:\n");
	while (scanf_s("%s%s%d", str1, sizeof(str1), str2, sizeof(str2), &n)) {
		if (result = mystrncpy(str1, str2, n)) {
			printf("result: %s\n", result);
		}
		else {
			printf("RESULT NULL!");
		}								//���ﲻ��Ҫ������뻺���ԭ���11-5.cһ������Ϊ���������ռλ������ %s
										//���Կհ��ַ����������з����ڣ������ᱻ %s ��ȡ
		printf("Enter two str separate by one space and maximum num character to write:\n");
	}
	return 0;
}
char* mystrncpy(char* str1, char* str2, int n) {
	char* res_val = str1;		//������һ�����ؽ��ָ��ָ�� str1 
	char* temp = str1;			//���˷��ؽ��ָ���⣬�ٸ�һ��ָ�� str1 �ĸ���
								//��Ȼ��ʱ���۶� str1 ���� res_val ������λ���������ᶪ��Դ�ַ��� str1 �ĵ�ַ
	int count1 = strlen(str1), count2 = strlen(str2);//��ȡ str1 �� str2 ���ַ�������

	if (n >= count2)
		return res_val;
	else {
		for (int i = count1, j = 0; j < n; i++, j++)
			*(temp + i) = *(str2 + j);		//ʵ�����������ָ���ʾ������λ�Ʋ�����ע�⸴ϰ����ʮ�µ����ݣ��Ѿ�����
		*(temp + count1 + n) = '\0';		//����󿽱����γɵ��ַ��������һλ���ٺ�һλ��Ϊ���ַ���ʹ֮�γɱ������Ͽɵ��ַ���
		return res_val;

		/*�����ڵ��Ե�ʱ���и����󣺣�Ҫ����Դ���� str1 �ĸ��� temp Ҳ�������﷢�ֵģ���Ϊÿ�ض��ᶪ��Դ�ַ�����ָ�뵼���������գ�
			������ÿ�� * (temp + i) = *(str2 + j) ִ�к�str1��res_val��temp ָ����ַ���������Ч
			�´θ�ֵʱ�ֻ�������ʾ�ַ����У�ע���ǣ��ַ����У������ַ�����
			����Ϊʲô������
			��Ϊ�ַ������ж�������ĩβ�ǿ��ַ� \0 ����ÿ�θ�ֵ��������ԭ�����ַ�����ĩβ������ַ�
			��һ��������ַ�ʱ������ԭ��λ���ϵĿ��ַ� \0��֮���ÿ������ַ���ĩβ��û�п��ַ� \0 ��
			������ÿ�θ�ֵ��ָ���ַ�����ָ�����Ч����Ϊ�ǲ��Ǹ��ַ�����ĩβû�п��ַ� \0
			��ÿ�θ�ֵʱ�ֻ�������ʾ�ַ����У���Ϊָ��ָ��ĵ�ַ��Ȼ���ڣ������������ַ����ķ�ʽ��ʾ������һ���ַ�����*/
	}
}