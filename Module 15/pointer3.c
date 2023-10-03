#include<stdio.h>

int main()

{

    double x = 5.23;
    double *ptr = &x;
    double *ptr2 = ptr;
    //*ptr = 10.20;
    *ptr2 = 34.34;
    printf("The val of x: %.2lf\n", x);
    printf("The val of x: %.2lf\n", *ptr);
    printf("The val of x: %.2lf\n", *ptr2);
    //printf("The size of ptr: %d", sizeof(ptr)); ??



    return 0;
}