#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
        // Taken input
        int n, m;
        scanf("%d %d", &n, &m);
        int arry[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arry[i]);
        }
        //Make Counter variavble 
        int count[m + 1];
        for (int i = 0; i <= m; i++)
        {
            count[i] = 0;
        }
        //Count the numbers
        for (int i = 0; i < n; i++)
        {
            int value = arry[i];
            count[value]++;
        }

        // Print the result
        for (int i = 1; i <= m; i++)
        {
            printf("%d\n", count[i]);
        }
        
    

    

    return 0;
}