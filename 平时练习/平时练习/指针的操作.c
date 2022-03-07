#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		int(*parr)[5] = &arr;
//		/*parr = parr + i;*/
//		parr += i;
//		/*printf("%p\n", *parr);*/
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%-2d ", *((*(parr)) + j));
//
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}
//int main()
//{
//	float f = 9.0f;
//	int *pfloat=(int*)&f;
//
//	printf("%f\n", f);
//	printf("%d\n", *pfloat);
//
//	*pfloat = 9;
//	printf("%f", f);
//	printf("%d\n",*pfloat);
//
//	return 0;
//}
int main()
{

	char arr[] = { "China." };
	char* ch = "China.";
	/*printf("%c", *(ch+1));*/
	/*printf("%d\n", strlen(ch));*/
	printf("%c ", arr[6]);
	for (int i = 0; i < strlen(ch); i++)
		printf("%c", *(ch + i));
	printf(" %c", *(ch + 6));
	return 0;
}