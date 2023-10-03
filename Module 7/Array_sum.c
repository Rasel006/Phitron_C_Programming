#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n, sum = 0;
    scanf("%d", &n);
     int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arry[i];
    }
    
    printf("%d", sum);
    
    

    return 0;
}