#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 unsigned int findMissingNumber(unsigned int sum,unsigned int a,unsigned int b,unsigned int c) {
    unsigned int totalSum=a+b+c;
    return sum - totalSum;
}

int main(){
    unsigned int T;
    scanf("%u", &T);

    while (T--){
        unsigned int sum,a,b,c;
        scanf("%u %u %u %u", &sum, &a, &b, &c);

        unsigned int missingNumber = findMissingNumber(sum, a, b, c);
        printf("%u\n", missingNumber);
    }

    return 0;
}




