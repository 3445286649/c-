#define _CRT_SECURE_NO_WARNINGS//���scanf��������
#include<stdio.h>
/*
int a = 80;//ȫ�ֱ���
int main()
{
	int age = 22;//�ֲ�����
	double weight = 70.5;
	age = age + 1;
	weight = weight - 20;
	printf("%d\n", age);
	printf("%lf\n", weight);
	return 0;
	//float �õ� %d 
	//double �õ� %lf

	//***************���ֲ�������ȫ��������ͻʱ  �ֲ���������
}
*/

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n",sum);
	return 0;
}