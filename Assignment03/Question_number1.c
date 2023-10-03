// Question: Write a C program to take positive integer N as input and print a pattern shown in the sample input output.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take INPUT
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;
    // Start Loop For Print 
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf("%c", 32);                    //32 = assci value of 'Space'
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%d", j);
        }

        if (i < n)
        {
            k += 2;
            s--;
        }
        else
        {
            k -= 2;
            s++;
        }
        
      printf("\n");
      
    }
    

    

    return 0;
}