#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int sum(int x , int y){
     int sum = x + y;

     return sum;
}// first way 

// another way to is 
int sum1(int x , int y);


int main(){

        printf("%d\n", sum(7, 9)); // first way 
        printf("%d\n", sum1(3, 7));// another way 

    return 0;
}

int sum1(int x, int y){
    int sum = x + y;

    return sum;
}