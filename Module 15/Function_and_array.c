#include<stdio.h>
void fun(int arr[], int size);
int main()

{

    int arr[5] = {10, 30, 40, 50, 60};
    fun(arr, 5); //Passing array methode-1

    return 0;
}
void fun(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}