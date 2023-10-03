#include<stdio.h>

int main()

{

    int x = 100;
    int *ptr = &x;
    //x = 200;
    *ptr = 200;
    printf("Val of x: %d\n", x);
    printf("Val of x: %d\n", *ptr); // *ptr derefrencing ptr value

    return 0;
}