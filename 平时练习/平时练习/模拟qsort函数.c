#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int cmp(const void*e1,const void *e2)
//{
//	return *((int*)e2) - *((int*)e1);
//
//}
//int main()
//{
//	int arr[] = { 111,2,311,4,5,116,7,8,9,10,19,28,46 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}

int cmp(const void* e1, const void* e2)//此函数需要用户自己写出来（目的是自己确定升序还是降序）
{
	return *((int*)e1) - *((int*)e2);
}
void swag(char *p1,char *p2,int siz)/////////////////////////////////////////////////
{
	int t = 0;
	for (t=0;t<siz;t++)
	{             
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}
void My_qsort(void* head, int sz, int siz, int (*p)(void* e1, void* e2))//这是用冒泡排序的方法来模拟的qsort函数
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i  - 1; j++)
		{
			if (cmp((char*)head+siz*j,(char*)head+siz*(j+1) )> 0)//前一个-后一个大于0的话，就交换（升序）；反之；//比较相邻两个元素的大小
			{
				swag((char*)head + siz *j, (char*)head + siz * (j+1),siz);//相邻两个元素之间的交换交给函数去实现
			}
		}
	}
}////////////////////////////////////////////////////////////////
int main()
{
	int arr[] = { 111,2,311,4,5,116,7,8,9,10,19,24,4,5,7,48,67,87,4,88,46 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_qsort(arr,sz,sizeof(arr[0]),cmp);
	for (int k = 0; k < sz; k++)
	{
		printf("%d  ", arr[k]);
	}
		return 0;
}