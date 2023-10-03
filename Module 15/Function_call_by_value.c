#include<stdio.h>
void fun(int x);
int main()

{
    int x = 100;
    printf("Val of x in main function before calling fun funtion: %d\n", x);
    // printf("Address of x in main function: %p\n", &x);
    fun(x); // we will get defferent address
    printf("Val of x in main function after calling fun funtion: %d\n", x);
    // There will be no change in main function, bcz we passed val in fun fuction, that is making change in fun function  
    return 0;
}

void fun(int x) // here x = 100 received
{
    // printf("Address of x in main function: %p\n", &x);
    x = 200; //Changing the val of x in fun fucntion
    printf("Val if x in fun functon: %d\n", x); // here, the changed val of x will be shown
}