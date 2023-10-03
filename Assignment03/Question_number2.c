// Question: Write a C program to take positive integer N as input and print a pattern shown in the sample input output.	
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    int n;
    scanf("%d", &n);

    // Start Loop and print 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("%c", 32);           // 32 is Assci value of space
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    

    return 0;
}