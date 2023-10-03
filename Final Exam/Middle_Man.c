#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


    int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(){
    int N;
    scanf("%d", &N);

    int ages[N];
    for (int i=0;i<N;i++)
        scanf("%d", &ages[i]);

    qsort(ages, N, sizeof(int), compare);

    if (N%2==1)
        printf("%d\n", ages[(N+1)/2-1]);
    else
        printf("%d %d\n", ages[N/2-1], ages[N/2]);

    return 0;
}


  

