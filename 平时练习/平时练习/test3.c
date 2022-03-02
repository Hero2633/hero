#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0])-1;
	for (int j = 0; j <= sz ; j++)
	{
		for (int i = 0; i <= sz - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				k = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = k;
			}
		}
	}

	return 0;
}