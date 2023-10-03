// Question: Write a function named count_before_zero() which receives an array of integers and the size of that array and counts the number of elements in that array until you find zero and returns that count. Call that function in the main function and print the count there.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// create count_before_zero() function and count 

int count_before_zero(int * arry, int * n){
        
        int counter = 0;
        for (int i = 0; i < *n; i++)
        {
            if (arry[i] == 0)
            {
                break;
            }
            counter++;
        }
        
    return counter;
}

int main(){

    // Take Input 
    int n;
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    // Call The function
    int counter_zero = count_before_zero(arry, &n);

    // Print the result 
    printf("%d", counter_zero);

    

    return 0;
}