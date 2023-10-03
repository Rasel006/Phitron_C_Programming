#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n); // Input

    int k = 1, s = n - 1;  // define Value

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf("%c", 32);   //   Space
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%c", '*');  //   Star
         }
         printf("\n");
         k +=2;
         s--;
    }
    for (int i = 1; i <= n; i++)
    {
        k -= 2;
        s++;
        for (int j = 1; j <= s; j++)
        {
            printf("%c", 32);
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%c", '*');
        }
        printf("\n"); 
        
    }
    
    
    


    return 0;
}