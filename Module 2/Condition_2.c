#include <stdio.h>

int main(){

    int taka ;
    scanf("%d", &taka);
    if (taka >= 100)
    {
        printf("Burgur khabo");
    }
    else if (taka >= 50){
        printf("Tahole amy kfc khabo");
    }
    else if (taka >= 20){
        printf("Naile cha khabo");
    }
    else{
        printf("ami gorib ami kisui kabona ");
    }
    

    return 0;
}