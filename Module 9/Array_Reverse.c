#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n ; 
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    int temp = 0,x = 0 ,j = n - 1;

    while (x < j)
    { 
        temp = arry[x];
        arry[x] = arry[j];
        arry[j] = temp;
        x++;
        j--;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
    

    return 0;
}