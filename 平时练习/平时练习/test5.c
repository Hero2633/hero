#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int max = 0, min = 0;
	int Max = 0, Min = 0;
	scanf("%d %d", &min, &max);
	int c = 0;
	if (max % min == 0)
	{
		c = min;
	}
	else
	{
	
		Max = max;
		Min = min;
		while (1)
		{
			c= Max % Min;
			
			if (c == 0)
			{
				c = Min;
				break;
			}
			Max = Min;
			Min = c;
		}
	}	
	int d = max*min/c;

	printf("%d", c + d);
}