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

    for (int i = 0; i < n; i++)
    {
        if (arry[i] <= 10)
        {
            printf("A[%d] = %d\n",i, arry[i]);
        }
        
    }
    
    

    return 0;
}