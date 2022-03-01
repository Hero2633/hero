#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void redifine(char* left, char* right)
{
	while (left < right)
	{
		char a = 0;
		a = *left;
		*left = *right;
		*right = a;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int sz = strlen(arr);
	redifine(arr, arr + sz - 1);

	char* star = arr;
	while (*star != '\0')
	{
		char* end = star;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		redifine(star, end - 1);
		star = end + 1;
	}
	printf("%s", arr);
	return 0;
}
