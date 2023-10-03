#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    
    // Take input
    char string_One[11], string_Two[11];
    scanf("%s %s", &string_One, &string_Two);

    // Find the len and print
    int length_One = strlen(string_One);
    int length_Two = strlen(string_Two);
    printf("%d %d\n", length_One, length_Two);

    // concatinate
    printf("%s%s\n", string_One, string_Two);

    // Swap first latter
    char temp = string_One[0];
    string_One[0] = string_Two[0];
    string_Two[0] = temp;
    printf("%s %s\n", string_One, string_Two);
    

    return 0;
}