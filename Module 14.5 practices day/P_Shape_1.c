#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input and declare variables
    int n, k, i;
    scanf("%d", &n);
    k = n;

    for ( i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        k--;
        
    }
    


    return 0;
}