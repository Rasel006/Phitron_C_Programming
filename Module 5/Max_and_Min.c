#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    // minmum 
    if (a <= b && a <= c)
    {
        printf("%d ",a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else{
        printf("%d ", c);
    }
    // maximaize
    if (a >= b && a >= c)
    {
        printf("%d",a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d",b);
    }
    else{
        printf("%d", c);
    }
    
    
    

    return 0;
}