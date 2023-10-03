#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    // int n = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     int password ;
    //     scanf("%d\n",&password);
    //     if (password == password)
    //     {
    //         n++;
    //     }
        
    //     if ( password == 1999)
    //     {
    //         printf("Correct");
    //         break;
    //     }
    //     else{
    //         printf("Wrong\n");
    //     }
        
    // }

    // Another way to do that is With EoF .EoF is End of file .
    
    int a; 
    while (scanf("%d",&a) != EOF)
    {
        if (a == 1999)
        {
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
        
    }
    


    

    return 0;
}