#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void string_move(char *str,int k)/////////方法一（一步一步翻转法）
//{
//	int len = strlen(str);
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *(str + len-1);
//		for (int j = len - 1; j > 0; j--)
//		{
//			
//			*(str + j) = *(str + j - 1);
//
//		}
//		*(str) = tmp;
//	}
//
//}
//int main()
//{
//	int k = 10;
//	char arr[20] = { "ABCDEF" };
//	string_move(arr, k);
//	printf("%s", arr); 
//	return 0;
//}////////////////

/////////方法二(三步翻转法)
//void move(char* left, char* right)
//{
//	for (; left < right; left++, right--)
//	{
//		char tmp = *(right);
//		*(right) = *(left);
//		*(left) = tmp;
//	}
//}
//int main()
//{
//	char ch[20] = { "ABCDEF" };
//	int k = 2;
//	int len = strlen(ch);
//	move(ch+len-k,ch+len-1);
//	move(ch,ch+len-k-1);
//	move(ch,ch+len-1);
//	printf("%s", ch);
//
//
//	return 0;
//}