#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    // Take input
    float x_discount,p_after_discount;
    scanf("%f %f", &x_discount, &p_after_discount);

    // Find the orginal price 
    float orginal_price;

    orginal_price = p_after_discount * (100 / (100 - x_discount));

    // Print the result 
    printf("%0.2f", orginal_price);



    return 0;
}