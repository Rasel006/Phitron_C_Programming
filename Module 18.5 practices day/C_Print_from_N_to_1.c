#include<stdio.h>
void fun(int x)
{
    printf("%d", x);
    if(x == 1) return;
    printf(" ");
    fun(x - 1);
}
int main()

{

    int n;
    scanf("%d", &n);
    fun(n);

    return 0;
}