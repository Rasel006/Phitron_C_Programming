#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    
    // First way and hard way to initialize a variable. 

    int a[5];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3; 
    a[3] = 4;
    a[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    
    
printf("\n");
    // Secend way more easy than first way  

    // int b[] = {1,2,3,4,5}; ----also can like this
    int b[5] = {1,2,3,4,5};
    for (int x = 0; x < 5; x++)
    {
        printf("%d\n", b[x]);
    }
    

    return 0;
}