#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int M1, M2, D;
    float numDays;

    scanf("%d %d %d", &M1, &M2, &D);

    numDays = (M1 * D) / (float)M2;

    printf("%d", (int)numDays);

    return 0;
}










   


