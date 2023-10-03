#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);
    char arry[100001];
    scanf("%s", arry);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arry[i] - '0';
    }
    
    printf("%d", sum);

    return 0;
}