#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���飺һ����ͬԪ�صļ���
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����Ĭ��0
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}