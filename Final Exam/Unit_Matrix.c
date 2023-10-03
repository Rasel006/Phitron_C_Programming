#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
   int N;
    scanf("%d",&N);

    
    int matrix[N][N];
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

   
    int isUnitMatrix =1;  
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (i==j){
                 
                if (matrix[i][j] != 1){
                    isUnitMatrix = 0;
                    break;
                }
            } else {
               
                if (matrix[i][j] != 0){
                    isUnitMatrix = 0;
                    break;
                }
            }
        }
        if (!isUnitMatrix){
            break;
        }
    }

    if (isUnitMatrix){
        printf("YES\n");
    } else{
        printf("NO\n");
    }

    return 0;
}



