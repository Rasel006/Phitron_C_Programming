#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    long long int n;
    long long int sum = 0;
    scanf("%lld", &n);
    long long int arry[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arry[i];
    }

    // One way to make negetive to positive 
    // if (sum < 0)
    // {
    //   long long int a = sum; // -5
    //   long long int b = sum * 2; // -10
    //   sum = a - b; // -5 - 10
    // }

    // Secend way to make negetive to positive 
    if (sum < 0)
    {
        sum = sum * -1;
    }
    
    printf("%lld",sum);
    
    return 0;
}