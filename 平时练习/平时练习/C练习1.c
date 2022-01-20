#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int count = 0;
//	int a = 0;
//	int b = -13;
//	if (b > 0)
//		count = 0;
//	if (b < 0)
//		count = 1;
//	b = abs(b);
//	while (b != 0)
//	{
//		a = b % 2;
//		b /= 2;
//		if (a == 1)
//			count++;
//	}
//	/*if (b > 0)*/
//		printf("%d", count);
//	/*else if (b < 0)*/
//		/*printf("%d", count + 1);*/
//	
//	
	
	
//	
//	
//	return 0;
//
//
//
//
//
//}
int f(int x,int y)
{
	int set = 1;
	for (int i = x, count =1; count<= y; i--)
	{
		set = set * i;
		count++;
	}
	int sf = 1;
	for (int j = 1; j <= y; j++)
	{
		sf = sf * j;
	}
	return set / sf;
}
int main()
{
	int t = 12;
	/*printf("%d", f(6, 3));*/
	for (int i = 0; i < t; i++)
	{
		for (int a = t-1-i; a>0; a--)
		{
			printf("  ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%4d", f(i, j));


		}
		printf("\n");
	}

	return 0;





}