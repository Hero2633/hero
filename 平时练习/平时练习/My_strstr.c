#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
//int main()
//{
//	char arr[20] = { "ABCDEF" };
//	char* p = "CDE";
//	char* ret = strstr(arr, p);
//	printf("%s", ret);
//	return 0;
//}//................试用strstr函数；




char* My_strstr(const char* arr, const char* p)
{
	char* k = NULL;
	char* sa =arr;
	char* sp = p;
	int len1 = strlen(arr);
	int len2 = strlen(p);
	if (len2 > len1)
		return k;
	while (1)
	{
		while (*arr != *p&&*arr!='\0')
		{
			arr++;
		}
		if (*arr == '\0')
			return k;
			sa = arr;//sa存放arr首字母与p首字母想同的可能；
		while (*arr && *p && (*arr == *p))//arr之后需要有还能比较的字母而不是\0;
		{
			arr++;
			p++;
		}
		if (*p == '\0')
			return sa;
			p = sp;//如果有不相等的，则将从头开始
		arr = sa + 1;//sa位置已经不满足了，这次从sa+1开始；
	}
}
int main()
{   
	char arr[20] = { "ABCDEF" };
	char* p = "CDEF";
	char* ret = My_strstr(arr,p);
	if (ret != NULL)
	{
		printf("找到了\n");
		printf("%s", ret);
	}
	else
		printf("找不到\n");
	
	return 0;
}