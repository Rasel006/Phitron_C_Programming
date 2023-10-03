#include<stdio.h>
void sum(void);
int main()

{

    sum();

    return 0;
}

void sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    printf("%d\n", s);
}