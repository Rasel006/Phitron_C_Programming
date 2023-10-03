#include<stdio.h>

int main(){

    // This is sum Of n (1 + N);

    long long int sum;
    int i, n;
    sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("\nThe sum of %d is %lld", n, sum);

// ALL OF THOSE BELLOW WON'T WORK 

    // This is sub Of n (1 - N)

    for (i = 1; i <= n; i++)
    {
        sum -= i;
    }
    printf("\nThe sub of %d is %lld", n, sum);


    // This is sub Of n (1 * N)

    for (i = 1; i <= n; i++)
    {
        sum *= i;
    }
    printf("\nThe mul of %d is %lld", n, sum);

    // This is sub Of n (1 / N)

    for (i = 1; i <= n; i++)
    {
        sum /= i;
    }
    printf("\nThe div of %d is %lld", n, sum);

    
    return 0;
}