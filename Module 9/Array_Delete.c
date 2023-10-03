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
    // NOW DeLete Array 
    int x;
    scanf("%d", &x);

    for ( int i = x; i < n - 1; i++)
    {
        arry[i] = arry[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
    
    


    return 0;
}