#include<stdio.h>

int main()

{

    int digit;
    scanf("%d", &digit);
    int a = digit % 10;
    digit = digit/10;
    int b = digit % 10;
    digit = digit/10;
    if(a % b == 0 || b % a == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}