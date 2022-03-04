#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[51] = { 0 };
	int a = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	int n = 0;
	scanf("%d", &n);
	int j = 0;
	for (j = a - 1; j >= 0; j--)
	{
		if (arr[j] <= n)
		{
			arr[j + 1] = n;
			break;
		}

		if (arr[j] > n)
		{
			arr[j + 1] = arr[j];
			arr[j] = n;

		}

	}

	if (j < 0)
	{

		arr[0] = n;
	}
	for (int c = 0; c <= a; c++)
	{


		printf("%d ", arr[c]);
	}

	return 0;
}