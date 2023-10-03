#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


    void Pyramid(int N){
    int i, j, k, spaces, stars;

    
    for (i=1;i<=N;i++){
        spaces = N - i;
        stars = 2 * i - 1;

      
        for (j=1;j<=spaces;j++){
            printf(" ");
        }

       
        for (k=1;k<=stars;k++){
            if (i%2==0){
                printf("*");
            } else{
                printf("^");
            }
        }

      
        printf("\n");
    }
}

int main(){
    int N;

   
   
    scanf("%d", &N);

    
    if (N<1 || N>20){
       
        return 0;
    }

    
    Pyramid(N);

    return 0;
}




