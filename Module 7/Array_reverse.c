#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n, primeNumber = 0, evenNumber = 0, odd = 0; // -- This variable will tell how much array we will take 
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    for (int x = n - 1; x >= 0; x--)
    {
        printf("%d\n", arry[x]);
    }
    return 0;
}