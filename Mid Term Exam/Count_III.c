#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char str[1001];
    int freq[26] = {0}; 
    
    scanf("%s", str);
    int len = strlen(str);
    

    for (int i = 0; i < len; i++){
        freq[str[i] - 'a']++;
    }
    

    for (int i = 0; i < 26; i++){
        printf("%c - %d\n", 'a' + i, freq[i]);
    }
    
    return 0;
}




