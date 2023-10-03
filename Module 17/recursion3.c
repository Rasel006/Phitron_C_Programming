#include<stdio.h>
void printf_arr(int arr[], int size, int i)
{   if (i == size) return;
    printf("%d ", arr[i]);
    printf_arr(arr, size, i + 1);
}
int main()

{   

    int arr[] = {10, 34, 53, 23, 23};
    int size = sizeof(arr)/sizeof(int);
    printf_arr(arr, size, 0);
    return 0;
}