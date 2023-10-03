#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Takes input
    char inputed_String[1000];
    scanf("%s", &inputed_String);

    // Find the length
    int inputed_String_length = strlen(inputed_String);

    // Check palindrome
    int i = 0, r = inputed_String_length,yes = 0;
    for (i = 0; i < inputed_String_length; i++)
    {
         r--;

        if (inputed_String[i] == inputed_String[r])
        {
            yes++;
        }
    }

    // Print the answer
    if (yes == inputed_String_length)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}