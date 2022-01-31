#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//size_t My_strlen(const char *sth)
//{
//	int count = 0;
//	while (*(sth++))
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//
//	char arr[] = "China";
//	My_strlen(arr);
//	printf("%zu", My_strlen(arr));
//	return 0;
//}//模拟实现strlen函数;



//char* My_strcpy(char* dest, const char* sth)
//{
//	assert(dest!=NULL);
//	assert(sth != NULL);
//	char* p = dest;
//	while (*dest++=*sth++)
//	{
//		;
//	}
//	return p;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxxx";
//	char arr2[] = "China NB";
//	My_strcpy(arr1,arr2);
//	printf("%s", arr1);
//	return 0;
//
//}//模拟实现strcpy；

//int main()
//{
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//	    }
//	}
//	printf("%d", count);
//	return 0;
//}//计算二进制位中有多少个1；

//int main()
//{
//	int ret = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a ^ b;
//	for (int i = 0; i < 32; i++)
//			{
//				if (((c >> i) & 1) == 1)
//				{
//					ret++;
//			    }
//			}
//	printf("%d",  ret);
//	return 0;
//}//计算二进制中不同位数；