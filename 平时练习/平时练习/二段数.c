#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int f(int arr[], int m)
{
	int p = 0;
	int i = 0;
	while (m / 10 != 0)
	{
		arr[i] = m % 10;
		m = m / 10;
		i++;

	}
	arr[i] = m;
	for (int j = 0; j < i; j++)
	{
		if (arr[j] != arr[j + 1])
		{
			for (int k = j + 1; k <= i - 1; k++)
			{
				if (arr[k] != arr[k + 1] && arr[k + 1] != 11)
				{
					p = 1;
				}

			}

		}
	}
	for (int j = 1; j <= i; j++)
	{
		if (arr[0] != arr[j])
		{
			;
		}
		else
		{
			p = 1;
		}
	}

	return p;
}

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	int arr[99] = { 11 };
	for (m=10; ; m++)
	{
		if (m % n == 0)
		{
			int x = f(arr, m);
			if (x == 0)
			{
				printf("%d", m);
				break;
			}
		}
    }
	return 0;
}