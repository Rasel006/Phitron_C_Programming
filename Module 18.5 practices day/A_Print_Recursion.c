#include<stdio.h>
void fun(int x)
{
    if(x == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    fun(x - 1);
}
int main()

{

    int n;
    scanf("%d", &n);
    fun(n);

    return 0;
}