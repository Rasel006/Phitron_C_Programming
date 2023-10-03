#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>


// This functions do not need perametter
 int sum(void){ // use of vaid
        int a, b;
        scanf("%d %d", &a, &b);
        int s = a * b;
        return s;
    }
 int sum(){
        int a, b;
        scanf("%d %d", &a, &b);
        int s = a * b;
        return s;
    }

int main(){
    
    int sm = sum();
    printf("%d", sm);
   
    return 0;
}