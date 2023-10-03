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
     for (int x = 0; x < n; x++)
    {
        if (arry[x] % 1 == 0 && arry[x] % arry[x])
        {
            primeNumber++;
        }
        else if (arry[x] % 2 == 0)
        {
            evenNumber++;
        }
        else{
            odd++;
        }
        
    }
    
    printf("%d -primeNumber\n%d -evenNumber\n%d -oddNumber\n", primeNumber, evenNumber, odd);


    return 0;
}