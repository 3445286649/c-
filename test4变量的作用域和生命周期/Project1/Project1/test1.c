#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���������������
//�ֲ������������򣬾����ھֲ��������ڵķ�Χ

//int main()
//{
//	printf("hehe\n");
//	int a = 0;
//	printf("%d\n", a);
//	return 0;
//}

//ȫ�ֱ��������� ������ȫ������
//extern g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//��������
//��������������  ���Ǳ����Ӵ��������ٵ�ʱ���
int main()
{
	int a = 19;
	{
		int a = 20;
		printf("%d\n", a);
	}
	printf("%d\n", a);
	return 0;
}