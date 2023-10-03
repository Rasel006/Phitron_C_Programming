#include<stdio.h>
void fun(int x, int y)
{   if(x == y+1)
    {
        return;
    }
    printf("%d\n", x);
    fun(x+1, y);
}
int main()

{

    int n;
    scanf("%d", &n);
    fun(1, n);
    return 0;
}