#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int x;
    x = 10;
    printf("%p\n", &x);
    
    int * p = &x;
    printf("%p\n", p);

    // printf("%d\n", *p); this is call dereferance 

    char a = 'a';
    printf("%p\n", &a);

    char * z = &a;
    printf("%p\n", z); 

    // printf("%c", *z); this is call dereferacnce 
    // to change a value form pointer  you must need to use dereferance 
    // *p = 90;
    // printf("%d\n", x);
                    // This how you can change a value by the adress of the variable 
    // *z = 'b';
    // printf("%c\n", a);





    return 0;
}