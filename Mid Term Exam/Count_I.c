#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, a[1000], even= 0, odd= 0;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
    
    printf("%d %d", even, odd);
    
    return 0;
}




