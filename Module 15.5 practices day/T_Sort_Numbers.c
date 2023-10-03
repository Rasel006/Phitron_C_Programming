#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

void sort_func(int a, int b, int c){
    
    int ar[5];
    ar[0] = a;
    ar[1] = b;
    ar[2] = c;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if(ar[i] > ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n" ,ar[i]);
    }


 printf("\n");
 
}

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sort_func(a, b, c);
    printf("%d\n%d\n%d", a, b, c);

    return 0;
}