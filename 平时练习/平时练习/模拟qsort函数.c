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

int cmp(const void* e1, const void* e2)//�˺�����Ҫ�û��Լ�д������Ŀ�����Լ�ȷ�������ǽ���
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
void My_qsort(void* head, int sz, int siz, int (*p)(void* e1, void* e2))//������ð������ķ�����ģ���qsort����
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - i  - 1; j++)
		{
			if (cmp((char*)head+siz*j,(char*)head+siz*(j+1) )> 0)//ǰһ��-��һ������0�Ļ����ͽ��������򣩣���֮��//�Ƚ���������Ԫ�صĴ�С
			{
				swag((char*)head + siz *j, (char*)head + siz * (j+1),siz);//��������Ԫ��֮��Ľ�����������ȥʵ��
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