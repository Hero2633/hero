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
//}//................����strstr������




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
			sa = arr;//sa���arr����ĸ��p����ĸ��ͬ�Ŀ��ܣ�
		while (*arr && *p && (*arr == *p))//arr֮����Ҫ�л��ܱȽϵ���ĸ������\0;
		{
			arr++;
			p++;
		}
		if (*p == '\0')
			return sa;
			p = sp;//����в���ȵģ��򽫴�ͷ��ʼ
		arr = sa + 1;//saλ���Ѿ��������ˣ���δ�sa+1��ʼ��
	}
}
int main()
{   
	char arr[20] = { "ABCDEF" };
	char* p = "CDEF";
	char* ret = My_strstr(arr,p);
	if (ret != NULL)
	{
		printf("�ҵ���\n");
		printf("%s", ret);
	}
	else
		printf("�Ҳ���\n");
	
	return 0;
}