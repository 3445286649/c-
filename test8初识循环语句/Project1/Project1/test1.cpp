#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int count = 0;
	while (count < 30000)
	{
		count++;
		printf("д����%d\n", count);
	}

	if (count == 30000)
	{
		printf("�ù���\n");
	}

	return 0;
}