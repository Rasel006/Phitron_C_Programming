#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000];
    int i, capital_count = 0, small_count = 0;


    scanf("%[^\n]s", str);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='A' && str[i]<='Z')
            capital_count++;
        else if(str[i]>='a' && str[i]<='z')
            small_count++;
    }

    printf("%d", capital_count);
    printf(" %d", small_count);

    return 0;
}





