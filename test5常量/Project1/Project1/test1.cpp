#define _CRT_SECURE_NO_WARNINGS 1

//����  ���������
#include<stdio.h>

//int main()
//{
//	// const ���γ����� ���г����� ���ܱ��ı�
//	 int num = 20;
//	num = 10;
//	printf("num = %d\n", num);
//
//	return 0;
//}

//


// #define  ����ı�ʶ������
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	return 0;
//}


//ö�ٳ��� : ����һһ�оٵĳ���

enum sex//ö�����ͱ���δ���Ŀ���ȡֵ
{
	MALE,//��
	FEMALE,//Ů
	SECRET//����
};

int main()
{
	enum sex s = MALE;

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);//�ʿɵó��ǳ���
	return 0;
} 