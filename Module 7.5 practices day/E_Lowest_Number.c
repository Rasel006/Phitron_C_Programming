#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int main(){

    int n, result = INT_MAX , indexOfArry = INT_MIN;
    scanf("%d", &n);
    int arry[n];


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (result > arry[i])
        {
            result = arry[i];
            indexOfArry = i + 1;
        }
        
    }
    
    printf("%d %d", result, indexOfArry);
    return 0;
}