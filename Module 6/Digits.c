#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int test, i;
    scanf("%d",&test);

    for (i = 0; i < test; i++)
    {
       int n;
    scanf("%d", &n);
    do
    {
        printf("%d " ,n % 10);
        n = n / 10;
    }
    while ( n != 0);
    printf("\n");
    }
 
    return 0;
}