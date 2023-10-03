#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n; 
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }
    int x;
    scanf("%d", &x);

    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i] + arry[j] == x)
            {
                flag += 1;   
            }
            
        }
        
    }
    
    if(flag == 0){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}