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
        if (arry[i] > 0)
        {
            printf("1 ");
        }
        else if (arry[i]< 0)
        {
            printf("2 ");
        }
        else
        {
            printf("0 ");
        }
        
    }
    
    

    return 0;
}