#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // //  Accending ordeer 
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if(arry[i] > arry[j]){
    //             int temp = arry[i];
    //             arry[i] = arry[j];
    //             arry[j] = temp;
    //         }
    //     }
        
    // }

    // decending order

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arry[i] < arry[j]){
                int temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
    
    
    

    return 0;
}