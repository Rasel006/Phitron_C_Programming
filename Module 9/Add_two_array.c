#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int a , b;
    scanf("%d",&a);
    int aArry[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &aArry[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", aArry[i]);
    }
    printf("\n");

    scanf("%d",&b);
    int bArry[b];
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &bArry[i]);
    }
    for (int i = 0; i < b; i++)
    {
        printf("%d ", bArry[i]);
    }

    int i ;
    int cArry[a + b];

    for (i = 0; i < a; i++)
    {
        cArry[i] = aArry[i];
    }

    for ( int j = 0; j < b; j++)
    {
        cArry[i] = bArry[j];
        i++;
    }
    printf("\n\n\n");
    for (int x = 0; x < i; x++)
    {
        printf("%d ", cArry[x]);
    }
    
    
    

    


    return 0;
}