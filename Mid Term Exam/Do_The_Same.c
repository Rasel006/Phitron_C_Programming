#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, K, i, j;

    scanf("%d", &N);

    scanf("%d", &K);

    for(i=1; i<=K; i++) {
        for(j=1; j<=N; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}




