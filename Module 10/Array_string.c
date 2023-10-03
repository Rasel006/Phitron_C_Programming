#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    char string[20];

    for (int i = 0; i < 20; i++)
    {
        scanf("%c", &string[i]);
    }
    
    for (int i = 0; i < 20; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n\n\n");
    printf("%d",sizeof(string));



    return 0;
}