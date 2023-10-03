#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
void print(void){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(i > 1){
            printf(" ");
        }
        printf("%d", i);
    }
    
}

int main(){

    print();

    return 0;
}