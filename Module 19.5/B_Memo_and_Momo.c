#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input 
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    // Print According the requrment 
    if (a % k == 0 && b % k == 0 )
    {
        printf("Both");
    }
    else if (a % k == 0 && b % k !=0)
    {
        printf("Memo");
    }
    else if (b % k == 0 && a % k != 0)
    {
        printf("Momo");
    }
    else{
        printf("No One");
    }
    
    
    

    return 0;
}