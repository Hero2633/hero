#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int l = 1;
	int h = 0;
	int k = 0;
	int s = 0;
	int A = 0;
	int a = 0;
	char ch[999] = { 0 };
	gets(ch);
	int i = 0;
	while ((ch[i]) != '\0')
	{
		if (ch[i] >= 65 && ch[i] <= 90)
		{
			A++;

		}
		else if (ch[i] >= 97 && ch[i] <= 122)
		{
			s++;
		}
		else if (ch[i] == 32)
		{
			k++;
		}
		else if (ch[i] >= 48 && ch[i] <= 57)
		{
			h++;
		}
		else
		{
			l++;
		}
		i++;
	}
	printf("��д %d\nСд %d\n�ո� %d\n���� %d\n���� %d\n", A, s, k, h, l);
	return 0;
}