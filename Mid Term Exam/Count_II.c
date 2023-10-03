#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char str[1000];
    int vowels=0,i;
    

    scanf("%s",str);
    
    for(i=0;i<strlen(str);i++){
        if(str[i] =='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
            vowels++;
        }
    }
    
    printf("%d", vowels);
    
    return 0;
}




