#define _CRT_SECURE_NO_WARNINGS 1
//转义字符：转变原来意思
#include<stdio.h>

int main()
{
	//printf("c:\test\testc\n");// \t是转义字符
	//printf("ad\nsda");
	printf("\a\a");
	return 0;
}

//printf再打印数据的时候，可以指定打印的格式%d，%c字符，%s字符串