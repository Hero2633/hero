#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int c = 1;//���ڿ�������β�ͣ���������
	int n = 0;//����
     scanf("%d", &n);
	 int d = 3 * n;//a��d���ڿ����ʼ�Ŀհ�����
	for (int i = 1; i <= n; i++)
	{
		for (int a = d -1;a>0;a--)//
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)//k����һ�д�ӡ���ٸ���*     ��
		{
			printf("*     ");//�ѵ�һ�㵱����*     ������ӡ
		}
		printf("\n");

		for (int a = d - 2; a > 0; a--)//ͬ��
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("* *   ");
		}
		printf("\n");

		for (int a = d-3; a > 0; a--)//ͬ��
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