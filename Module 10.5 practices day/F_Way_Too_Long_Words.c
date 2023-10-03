#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(){
    
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char input_S[101];
        scanf("%s", &input_S);

        int input_lenght = strlen(input_S);

        if (input_lenght > 10)
        {
            printf("%c%d%c\n",input_S[0],input_lenght - 2,input_S[input_lenght - 1]);
        }
        else{
            printf("%s\n", input_S);
        }
        
    }
    


    return 0;
}