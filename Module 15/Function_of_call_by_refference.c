#include<stdio.h>
void fun (int *ptr);
int main()

{

    int  x = 100;
    //printf("Address of x from main fucntion: %p\n", &x);
    fun(&x);
    printf("The val of x after changing from fun function: %d\n", x);

    return 0;
}

void fun (int *ptr)
{
    //printf("Val of ptr form fun fucntion: %p\n", ptr); // the val of ptr will be address of x for calling by ref.
    //accessing x var value from fun function
    //printf("The val of x: %d\n", *ptr);
    //Changing val of x var from fun function-->
    *ptr = 45;
    
}