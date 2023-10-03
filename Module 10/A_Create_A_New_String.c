#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
     // Take inputs 

    char input_String_1[1000];
    scanf("%s", &input_String_1);

    char input_String_2[1000];
    scanf("%s", &input_String_2);

    // Find the lengths 
     
    int x = strlen(input_String_1);
    int y = strlen(input_String_2);

    // Prints values

    printf("%d %d\n", x, y);
    printf("%s %s", input_String_1, input_String_2);
    
    
    return 0;
}