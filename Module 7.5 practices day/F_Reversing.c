#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    // This the one way with for loop 
    // for (int i = n - 1; i >= 0 ; i--)
    // {
    //     printf("%d ", arry[i]);
    // }

    // This is the secend way with while loop 

    while (n--)
    {
        printf("%d ", arry[n]);
    }
    
    // This the third way with do while loop 

    // do
    // {
    //     n--;
    //     printf("%d ", arry[n]);
    // } while (n != 0);
    
    
    

    return 0;
}