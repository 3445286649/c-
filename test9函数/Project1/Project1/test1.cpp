#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//º¯Êı

int add(int x, int y)
{
	int sum = x + y;
	return sum;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = add(num1, num2);
	printf("%d\n", sum);
	return 0;
}