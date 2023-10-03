#include<stdio.h>
void sum(int x, int y);
int main()

{

    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}

void sum(int x, int y)
{
    int s = x + y;
    printf("%d\n", s);

}