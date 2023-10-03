#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,v,even_sum=0,odd_sum=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d", &v);
        if (v%2==0){
            even_sum+=v;
        } else{
            odd_sum+=v;
        }
    }

    printf("%d %d",even_sum,odd_sum);

    return 0;
}




