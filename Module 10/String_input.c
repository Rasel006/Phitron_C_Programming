#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include<string.h>

int main(){

    // int string[7]; // if we want to use this input for string than we must assin the a 1 bigger index number than out text 

    // scanf("%s", &string); // IN there we can use &  or not this our wish because of this stirng power we learn this later how it works 


    // printf("%s", string); 

    // In the above section we can only take input  until a spece comes 

    // so take with with space word s we need to use the build in funciton of c is GETS() or FGETS()


   // useges of gets()

    char string_gets [21];

    gets(string_gets);

    printf("%s", string_gets);

    //  and fgets()
    printf("\n\n\n");

    char string_Fgets [22];

    fgets(string_Fgets, 22,stdin);

    string_Fgets[20] = '\0'; // to skip any enter or word to you need this null
    
    printf("%s", string_Fgets);

    return 0;
}