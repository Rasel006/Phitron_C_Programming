#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void sum(void){
    
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;

    printf("%d", s);
} 

int main(){
 
    sum();

    return 0;
}