#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//int main()                 //降序代码；
//{
//	int arr[] = { 179,163,175,178,173 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int min = arr[0];
//	for (int j = 0; j <= sz - 1; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	
//	int count = 1;
//	while (count <= sz - 1)
//	{
//		for (int i = 0; i <= sz - 2; i++)
//		{
//			if (arr[i] < arr[i + 1])
//			{
//				int y = 0;
//				y = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = y;
//
//			}
//		}
//		count++;
//	}
//	for (int j = 0; j <= sz - 1; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

int i = 1;//汉诺塔问题
void move(int n, char x, char y)
{
	printf("第%d步,将第%d块盘子,从%c->%c\n", i++, n, x, y);
}
void game(int n, char a, char b, char c)
{
	if (n == 1)
		move(n, a, c);
	else
	{
		game(n - 1, a, c, b);
		move(n, a, c);
		game(n - 1, b, a, c);


	}


}
int main()
{
	printf("请输入层数:");
	int n = 0;
	scanf("%d", &n);
	putchar('\n');
	game(n,'A','B','C');
	return 0;
}