#define _CRT_SECURE_NO_WARNINGS//解决scanf函数报错
#include<stdio.h>
/*
int a = 80;//全局变量
int main()
{
	int age = 22;//局部变量
	double weight = 70.5;
	age = age + 1;
	weight = weight - 20;
	printf("%d\n", age);
	printf("%lf\n", weight);
	return 0;
	//float 用的 %d 
	//double 用的 %lf

	//***************当局部变量和全部变量冲突时  局部变量优先
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