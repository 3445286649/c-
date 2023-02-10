#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int count = 0;
	while (count < 30000)
	{
		count++;
		printf("写代码%d\n", count);
	}

	if (count == 30000)
	{
		printf("好工作\n");
	}

	return 0;
}