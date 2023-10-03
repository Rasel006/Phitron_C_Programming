#include<stdio.h>
int sum(void);
int main()

{

    int x = sum();
    printf("%d\n", x);

    return 0;
}

int sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}