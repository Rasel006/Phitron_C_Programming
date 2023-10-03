#include <stdio.h>
int main(int argc, char const *argv[])
{

    // Arithmetic pluse two value 
    int a = 10, b = 20;
    int sum = a + b ;
    printf("The sum value of a and b is %d", sum);
    
    // Arithmetic minus two value 
    int a1 = 10, b1 = 20;
    int mins = b1 - a1;
    printf("\nThe minus value of a1 and b1 is %d", mins);

    // Arithmetic multiply two value 
    int a2 = 10, b2 = 20;
    int mltpy = a2 * b2;
    printf("\nThe multiply value of a2 and b2 is %d", mltpy);
    
    // Arithmetic dvietion two value 
    int a3 = 5, b3 = 20;
    int dvid = b3 / a3;
    float divid = b3*1.0 / a3;
    printf("\nThe divition value of a3 and b3 is %d", dvid);
    printf("\nThe divition floating value of a3 and b3 is %f", divid);
    
    // Arithmetic modulus two value 
    int a4 = 3, b4 = 20;
    int mods = b4 % a4;
    printf("\nThe modulus value of a4 and b4 is %d", mods);

    // All in one 
    printf("\n_____________________________________________________________");
    printf("\npluse value %d\nminius value %d\nmultiply value %d\ndivition value %d\nmodulus value %d", sum, mins, mltpy, dvid, mods);
    
    
    return 0;
}