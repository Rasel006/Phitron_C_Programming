#include <stdio.h>

int main(){
       
    //     // Work Of ScanF Funcitons 
        int a;
        float b;
        char c;
    // // normal way to use scanf;
        scanf("%d %f %c", &a, &b, &c);

        printf("%d \n%f \n%c\n", a, b, c);
        // if some want to give persentage value to input 
        int per1, per2;
        char g;
        
    //     // This this one way to solve the problem 
        scanf("%d%c %d%c", &per1,&g, &per2,&g);

        printf("%d%% %d%%\n", per1, per2);
    //    // Another way to solve the problem to solve the problem
    //   //Is asign a temp vairable 
       int percentage1, percentage2;
       scanf("%d%% %d%%", &percentage1, &percentage2);
       printf("%d%% %d%%\n", percentage1, percentage2);
    //     // This you can get character input with number and printf
        int char1, char2;
       scanf("%dx %dy", &char1, &char2);

       printf("%dx %dy", char1, char2);



    return 0;
}