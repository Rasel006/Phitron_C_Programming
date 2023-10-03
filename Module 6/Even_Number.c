#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n, i;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("-1");
    }
    

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    

    return 0;
}