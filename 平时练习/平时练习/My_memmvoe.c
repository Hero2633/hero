#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<errno.h>
//int main()
//{
//
//
//
//	  
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);
//	return 0;
//}

//void* My_memmove(void* dest, void* sth, unsigned num)
//{
//	void* ret = dest;
//	char* d = (char*)dest;
//	char* s = (char*)sth;
//	if (d >= s)
//	{
//		d = d + num-1;
//		s = s + num-1;
//		while (num--)
//		{
//			*d-- = *s--;
//		}
//		 d = (char*)dest;
//		 s = (char*)sth;
//	}
//	else
//	{
//		while (num--)
//		{
//			*d++ = *s++;
//		}
//	}
//	return dest;
//}
//int main()
//{
//	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
//	My_memmove(arr + 2, arr+3, 20);
//	return 0;
//}