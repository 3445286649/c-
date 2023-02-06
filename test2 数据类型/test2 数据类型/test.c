#include<stdio.h>

int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}

//由该程序可得 char short int long longlong float double  分别占1 2 4 4 8 4 8字节   其中一字节等于8比特