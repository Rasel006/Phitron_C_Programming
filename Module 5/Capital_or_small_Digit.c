#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    char x;
    scanf("%c", &x);
    if( x <=64){
        printf("IS DIGIT");
    }
    else if (x <= 90)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (x <= 122)
    {
        printf("ALPHA\nIS SMALL");
    }
    
    

    return 0;
}