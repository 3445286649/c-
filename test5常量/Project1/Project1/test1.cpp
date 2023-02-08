#define _CRT_SECURE_NO_WARNINGS 1

//常量  ：不变的量
#include<stdio.h>

//int main()
//{
//	// const 修饰常变量 具有常属性 不能被改变
//	 int num = 20;
//	num = 10;
//	printf("num = %d\n", num);
//
//	return 0;
//}

//


// #define  定义的标识符常量
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a);
//	return 0;
//}


//枚举常量 : 可以一一列举的常量

enum sex//枚举类型变量未来的可能取值
{
	MALE,//男
	FEMALE,//女
	SECRET//保密
};

int main()
{
	enum sex s = MALE;

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);//故可得出是常量
	return 0;
} 