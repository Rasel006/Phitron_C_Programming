#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int N;
    scanf("%d", &N);

    int tWin = 0, pWin = 0;
    for (int i=0;i<N;i++){
        int x1, x2;
        scanf("%d %d", &x1, &x2);

        if (x1>x2)
            tWin++;
        else if (x2>x1)
            pWin++;
    }

    if (tWin>pWin)
        printf("Tiger\n");
    else if (pWin>tWin)
        printf("Pathan\n");
    else
        printf("Draw\n");

    return 0;
}




