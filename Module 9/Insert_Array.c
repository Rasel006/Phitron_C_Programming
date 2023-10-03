#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n;
    scanf("%d", &n);
    int arry[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    
    int x, v;
    scanf("%d %d", &x, &v);
    
    for (int i = n; i > x; i--)
    {
        arry[i] = arry[i - 1];
    }
    arry[x] = v;
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arry[i]);
    }
    

    

    return 0;
}