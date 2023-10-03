#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    // First  or the normal way to initialize the string and print it

    char string[6] = {'s','i','f','a','t', 'h'};

    for (int i = 0; i < 6; i++)
    {
        printf("%c", string[i]);
    }

    
    // // // // // // // //  //// ////// 
    printf("\n\n\n");

    //Secend way or string way to initialize and print it 

    char strng[7] = "Sifath";  // In here we give 7 index instead of  6 becouse of To print the string finely without any king erorr

    printf("%s", strng);

    printf("\n\n\n");
    for (int i = 0; i < 6; i++) // if we use for loop to print the array than we didn't need to assin 7 index to the array 
    {
        printf("%c", strng[i]);
    }
    

    return 0;
}