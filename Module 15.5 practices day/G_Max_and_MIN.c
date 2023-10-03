#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
// Get the arry input as pereameter and find the min and max 
void max_min(int * arry, int * n){

    int min = arry[0] , max = arry[0];

    for (int i = 0; i < *n; i++)
    {
        if (arry[i] < min)
        {
            min = arry[i];
        }
        if (arry[i] > max)
        {
            max = arry[i];
        }
    }

    printf("%d %d", min , max);
}

int main(){
    // Take arry input and pass to the function 
    int n;
    scanf("%d", &n);
    int arry[n];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    max_min(arry, &n);

    ///////

    return 0;
}