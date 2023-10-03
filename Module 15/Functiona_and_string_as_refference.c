#include<stdio.h>
void fun(char *arr) // passing an array is actually passing refrence
{
    arr[0] = 'P'; // *(arr+0) = 'P'
}
int main()

{

    char arr[] = "Hello";
    fun(arr);
    printf("%s", arr);

    

    return 0;
}