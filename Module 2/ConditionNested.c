#include <stdio.h>

int main(){
    int taka ;

    scanf("%d", &taka);

    if (taka >= 5000){
        printf("I have %d taka.\nSo going to Cox's Bazar\n",taka);
        if (taka >= 10000)
        {
            printf("I have %d taka to go SantMartin.\nNow I Can Go SantMartin\n",taka);
        }
        else{
            printf("Don't have enough money to go SantMartin.\nHave to come back\n");
        }
    }
    else{
        printf("I only have %d taka so i can't go anyware\n", taka);
    }
    

    return 0;
}