#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ַ�������һ���ַ� ��""��������һ���ַ�
//int main()
//{
//	"sadad";
//	"asdasdas";
//	return 0;
//}

int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����Ľ�����־��\0
	//char arr[] = "hello";
	char arr1[] = "abc";//a b c \0
	char arr2[] = { 'a','b','c','\0'};
	//��ӡ�ַ���
	printf("%s\n",arr1);
	printf("%s\n", arr2);
	return 0;
}