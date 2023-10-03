#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
     
    //  Write array Get input and Print it 
    int ar[5];
    for (int i = 0; i <= 4; i++)
    {
    scanf("%d",&ar[i]);
    }
    for (int u = 0; u <=4 ; u++)
    {
        printf("%d - number \n", ar[u]);
    }
    

    return 0;
}