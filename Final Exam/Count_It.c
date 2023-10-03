#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


    void countCharacters(char* str){
    int smallCount = 0;
    int capitalCount = 0;
    int spaceCount = 0;

    for (int i=0;str[i]!= '\0';i++){
        if (str[i]>='a' && str[i]<='z'){
            smallCount++;
        } else if (str[i]>='A' && str[i]<='Z'){
            capitalCount++;
        } else if (str[i]==' '){
            spaceCount++;
        }
    }

    printf("Capital - %d\n", capitalCount);
    printf("Small - %d\n", smallCount);
    printf("Spaces - %d\n", spaceCount);
}

int main(){
    char str[1000];
   
    fgets(str, sizeof(str), stdin);

    countCharacters(str);

    return 0;
}



