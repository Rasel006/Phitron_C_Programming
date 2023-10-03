#include<stdio.h>
int main()

{
    int  a,b;
    
    scanf("%d %d",&a,&b);

    int add=a + b;
    int sub=a - b;
    int mul=a * b;
    float div = a*(1.0) / b;

    printf("%d+%d=%d\n", a, b, add);
    printf("%d-%d=%d\n", a, b, sub);
    printf("%d*%d=%d\n", a, b, mul);
    printf("%d/%d=%.2f\n", a, b, div);

    return 0;
}