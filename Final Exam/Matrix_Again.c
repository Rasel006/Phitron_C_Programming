#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N, M;
    scanf("%d %d",&N,&M);

    int matrix[N][M];
    int i,j;

    
    for (i=0;i<N;i++){
        for (j=0;j<M;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (j=0;j<M;j++){
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");

    
    for (i=0;i<N;i++){
        printf("%d ", matrix[i][M - 1]);
    }

    return 0;
}








