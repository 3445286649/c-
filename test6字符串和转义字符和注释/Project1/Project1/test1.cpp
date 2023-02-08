#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//字符串就是一串字符 用""括起来的一串字符
//int main()
//{
//	"sadad";
//	"asdasdas";
//	return 0;
//}

int main()
{
	//字符数组 - 数组是一组相同类型的元素
	//字符串的结束标志是\0
	//char arr[] = "hello";
	char arr1[] = "abc";//a b c \0
	char arr2[] = { 'a','b','c','\0'};
	//打印字符串
	printf("%s\n",arr1);
	printf("%s\n", arr2);
	return 0;
}