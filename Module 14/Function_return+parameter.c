#include<stdio.h>
int sum (int x, int y);
int main()

{
    printf("%d\n", sum(10, 40));
    printf("%d\n", sum(100, 400));
    printf("%d\n", sum(100, 410));
    

    return 0;
}

int sum (int x, int y)
{
    int s;
    s = x + y;
    return s;
}