// Question: Show the 4 types of examples of functions given below with an example. You can give any example you want, but make sure you are giving different examples for all the four types..
// Has Return + Parameter
// Has Return + No Parameter
// No Return + Parameter
// No Return + No Parameter

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

// Has Return + Parameter
int single_ascii_alpha(char x){
    
    if (x >= 'a' && x <= 'z')
    {
       return 1;
    }
    else if (x >= 'A' && x <= 'Z')
    {
        return 2;
    }
}


// Has Return + No Parameter
int print_the_func(void){
    int Number;
    scanf("%d", &Number);
    return Number;
}

// No Return + Parameter
void sum_of_two(int * a, int * b){
    int sum = *a + *b;
    printf("Result %d\n", sum);
}

// No Return + No Parameter
void arry_print(void){
    // Take input 
    int n;
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    // Print 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
}


int main(){

// Has Return + Parameter
    char x;
    scanf("%c", &x);
    int return_value = single_ascii_alpha(x);
    if (return_value == 1)
    {
        printf("The %c is small letter\n", x);
    }
    else if (return_value == 2)
    {
        printf("The %c is big letter\n", x);
    }
    else{
        printf("This another kind of charecter\n");

    }

// Has Return + No Parameter
    int print = print_the_func();
    printf("%d\n", print);

// No Return + Parameter
   int a, b;
    scanf("%d %d", &a, &b);
    sum_of_two(&a, &b);

// No Return + No Parameter
    arry_print();

    return 0;
}