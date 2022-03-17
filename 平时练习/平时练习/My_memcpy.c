#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<errno.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	memcpy(arr2 + 1, arr1, 20);
//
//	return 0;
//}

//void*My_memcpy(void* dest, void* sth, unsigned num)//模拟实现memcpy（）函数
//{
//	char* d = (char*)dest;
//	char* s = (char*)sth;
//	while (num--)
//	{
//		*d++ = *s++;
//	}
//	return dest;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	My_memcpy(arr2 + 1, arr1, 20);
//	return 0;
//}