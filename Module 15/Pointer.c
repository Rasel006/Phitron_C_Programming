#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // normal variable and printf
    int x;
    x = 15;
    printf("value of x - %d\n", x);
    printf("Adress of x - %p\n", &x);
    // pointer and printf
    int * ptr = &x; //Each and every pointer take 4 byte in storage 
    printf("Adress of x by pointer ptr - %p\n", ptr);
    printf("Get value of x by dereferance of pointer - %d\n", *ptr);
    // Assign one pointer to another pointer 
    int * ptr2 = ptr;
    printf("Adress of x by ptr to ptr2 - %p\n", ptr2);
    printf("Value of x by ptr to ptr2 - %d\n", *ptr2);
    // Save ptr adress to another vairable and acsess the x value
    int * ptr3 = &ptr;
    printf("Adress of ptr that contains x value -%p\n", ptr3);
    // Print the value of x by the ptr3 
    int * ptr4 = *ptr3;
    printf("Adress of x that have ptr - %p\n", ptr4);
    printf("Adress of x that have ptr - %d\n", *ptr4);

    return 0;
}