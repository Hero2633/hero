#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int comp(char* ch, char* ch1)//������ٷ�
//{
//	int len = strlen(ch);
//	int len1 = strlen(ch1);
//	if (len1 != len)
//		return 0;
//	for (int i = 0; i < len; i++)
//	{
//		char tmp = *(ch + len - 1);
//		for (int j = len - 1; j > 0; j--)
//		{
//			*(ch + j) = *(ch + j - 1);
//		}
//		*(ch) = tmp;
//		if (strcmp(ch, ch1) == 1)
//		{
//			return 1;
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//1,��һ��
//	//2���Ƚ�һ��
//	//3�����Է���1�������Է���0��
//	char ch[20] = { "ABCDEF" };
//	char ch1[20] = { "CDEFAB"};
//	int ret=comp(ch, ch1);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//
//	return 0;
//}
// 
// ����2--�⺯���ķ���
// strncat����������strstr����
//int is(char*ch,char*ch1)
//{
//	int len1 = strlen(ch1);
//	int len = strlen(ch);
//	if (len != len1)
//		return 0;
//	strncat(ch, ch, len);
//	char*st=strstr(ch, ch1);
//	if (st == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char ch[20] = { "ABCDEF" };
//	char ch1[20] = { "EFABCD" };
//	int ret = is(ch, ch1);
//	if (ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}