#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int c = 1;//用于控制最后的尾巴（数柄）；
	int n = 0;//层数
     scanf("%d", &n);
	 int d = 3 * n;//a和d用于控制最开始的空白数；
	for (int i = 1; i <= n; i++)
	{
		for (int a = d -1;a>0;a--)//
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)//k代表一行打印多少个“*     ”
		{
			printf("*     ");//把第一层当作“*     ”来打印
		}
		printf("\n");

		for (int a = d - 2; a > 0; a--)//同上
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("* *   ");
		}
		printf("\n");

		for (int a = d-3; a > 0; a--)//同上
		{
			printf(" ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("* * * ");
		}
		printf("\n");
		d = d - 3;
	}
	while (c<=n)
	{
		for (int i = 1; i <= (6 * n - 1) / 2; i++)
		{
			printf(" ");
		}
		printf("*\n");
		c++;
	}
	return 0;
}