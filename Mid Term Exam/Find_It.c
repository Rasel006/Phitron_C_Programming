#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, A[100], x, i, count=0;

   
    scanf("%d", &n);

   
    for(i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }

   
    scanf("%d", &x);

    for(i=0; i<n; i++) {
        if(A[i] == x)
            count++;
    }

    printf("%d",count);

    return 0;
}




















