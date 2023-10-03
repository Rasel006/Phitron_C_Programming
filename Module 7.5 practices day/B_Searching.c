#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n ,checkNumber,result = -1;
    scanf("%d", &n);
    int arry[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    scanf("%d", &checkNumber);

    for (int i = 0; i < n; i++)
    {
        if (checkNumber == arry[i])
        {
            result = i;
            break;
        }    
    }

    if (result == -1)
    {
        printf("%d", result);
    }
    else{
        printf("%d", result);
    }
    

    
    

    return 0;
}