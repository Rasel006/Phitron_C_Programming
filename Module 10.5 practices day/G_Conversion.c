#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    //Takes input
    char inputed_String[100001];
    fgets(inputed_String, 100001, stdin);
    

    int lengthOfString = strlen(inputed_String);
    for (int i = 0; i < lengthOfString; i++)
    {
        if (inputed_String[i] >= 'a' && inputed_String[i] <= 'z')
        {
            inputed_String[i] -= 32; // get capital of alphabet
        }
        else if(inputed_String[i] >= 'A' && inputed_String[i] <= 'Z')
        {
         inputed_String[i] += 32; // get small of alphabet
        }

        if (inputed_String[i] == ',')
        {
            inputed_String[i] = 32; // value of space is 32
        }
    }

    printf("%s",inputed_String);
    
    return 0;
}