#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    char string_input_1[21], string_input_2[21];
    scanf("%s %s", string_input_1, string_input_2);

    int value = strcmp(string_input_1, string_input_2);

    if (value > 0){
        printf("%s", string_input_2);
    }
    else if (value < 0)
    {
        printf("%s", string_input_1);
    }
    else{
        printf("%s", string_input_1);
    }

    // int i = 0;
    // while (1)
    // {
    //     if (string_input_1[i] =='\0' && string_input_2 == '\0')
    //     {
    //         printf("%s", string_input_1);
    //         break;
    //     }
    //     else if (string_input_1[i] == '\0')
    //     {
    //         printf("%s", string_input_1);
    //         break;
    //     }
    //     else if (string_input_2[i] == '\0')
    //     {
    //         printf("%s", string_input_2);
    //         break;
    //     }

    //     if (string_input_1[i] == string_input_2[i])
    //     {
    //         i++;
    //     }
    //     else if (string_input_1[i] < string_input_2[i])
    //     {
    //         printf("%s", string_input_1);
    //         break;
    //     }
    //     else{
    //         printf("%s", string_input_2);
    //         break;
    //     }
        
    // }
    
    
    
    

    return 0;
}