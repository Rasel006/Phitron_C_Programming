#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    char length_String[20];
    scanf("%s", &length_String);

    printf("%s\n", length_String);

    // if we want to print the lenght of the this string loop 
    printf("The length print \n");
    //for loop 
    int count = 0;
    for (int i = 0; length_String[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d -- for loop ", count);
 
    // While loop 
    int i = 0 ; 
    int count1 = 0;
    while (length_String[i]!='\0')
    {
        count1++;
        i++;
    }
    printf("\n%d -- while loop ", count1);

    // With the build in function

   int bulid_FUN_length = strlen(length_String);
   printf("\n%d -- build-in-function", bulid_FUN_length);

    return 0;
}