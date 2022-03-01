#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int f(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n > 2)
        return f(n - 1) + f(n - 2);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    f(n);
    printf("\n%d", f(n));

    return 0;
}