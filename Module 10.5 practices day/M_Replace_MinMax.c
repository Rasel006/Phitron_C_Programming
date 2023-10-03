#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Takes input values
    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // Find the max or min value 
    int max_Array_Value = arry[0], min_Array_Value = arry[0];

    for (int i = 0; i < n; i++)
    {
        if (arry[i] > max_Array_Value)
        {
            max_Array_Value = arry[i];
        }
        else if (arry[i] < min_Array_Value)
        {
            min_Array_Value = arry[i];
        }
    }

    // Swap those values

    for (int i = 0; i < n; i++)
    {
        if (arry[i] == max_Array_Value)
        {
            arry[i] = min_Array_Value;
        }
        else if (arry[i] == min_Array_Value)
        {
            arry[i] = max_Array_Value;
        }
    }
    
    // Print the result 

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
    
    

    return 0;
}