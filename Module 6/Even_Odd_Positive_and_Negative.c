#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int n,x;
    scanf("%d",&n);
    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);

        if (x  % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }

        if (x > 0)
        {
            pos++;
        }
        else if(x < 0){
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);
    

    return 0;
}