// Question: Explain about pass by value and pass by reference with an example

// Pass By Value : pass by value is a method that pass a argument to a function where the passed value is a copy of original. It can not change the real value .
// Example:


// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <time.h>
// #include <string.h>

// void pass_by_value(int x){
//     x = 123;
//     printf("New value In new function = %d\n", x);
// }

// int main(){

//     int x = 100;
    
//     pass_by_value(x);

//     printf("The main value in main function = %d\n", x);
//     return 0;
// }

// Pass By Reference :  Pass by reference is a method that pass a argument to a function
// Where the pass argument is reference or address of the variable . This allow to access the main value of the argument and it can change the original value


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void pass_by_reference(int * x){
    *x = 123;
    printf("New value In new function = %d\n", *x);
}

int main(){
    int x = 100;
    pass_by_reference(&x);
    printf("The main value in main function = %d", x);

    return 0;
}