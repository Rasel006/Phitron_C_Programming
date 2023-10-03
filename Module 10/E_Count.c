#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    
    //Takes input
    char input_Number_string[1000000];
    scanf("%s", &input_Number_string);

    // Find length of string and run loop and sum the digits 

    int arrylen = strlen(input_Number_string);
    int sum = 0;
    for (int i = 0; i < arrylen; i++)
    {
        sum += input_Number_string[i] - '0';
    }
    printf("%d", sum);
    
  
    return 0;
}