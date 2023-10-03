#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    //Take input
    char input_String[1000000];
    fgets(input_String, 1000000, stdin);

    // Check \ where
    
    for (int i = 0; i < 1000000; i++)
    {
        if (input_String[i]== '\\')
        {
            input_String[i] = '\0';
        }
        
    }


    // Prints input 
    printf("%s", input_String);
    

    return 0;
}