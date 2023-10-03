#include<stdio.h>
int main(){

    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if((a+b-c) == d || (a-b+c) == d || (a+b*c) == d || (a*b+c) == d || (a-b*c) == d || (a*b-c) == d)
    {
        printf("Yes\n");
    } 
    else
    {
        printf("No\n");
    }

    return 0;
}