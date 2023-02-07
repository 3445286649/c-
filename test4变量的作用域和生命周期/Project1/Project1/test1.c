#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//作用域和生命周期
//局部变量的作用域，就是在局部变量所在的范围

//int main()
//{
//	printf("hehe\n");
//	int a = 0;
//	printf("%d\n", a);
//	return 0;
//}

//全局变量作用域 作用于全部工程
//extern g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//生命周期
//变量的生命周期  就是变量从创建到销毁的时间段
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