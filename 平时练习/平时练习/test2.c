#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	scanf("%d", &n);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		if (arr[mid] == n)
		{
			printf("下标为:%d", mid);
			break;
		}
		
	}
	if (left > right)
		printf("没找到");
	return 0;
}