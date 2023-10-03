#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

int main(){

    char a;
    scanf("%c", &a);

    if (isupper(a))
    {
        a = tolower(a);
        printf("%c", a);
    }
    else if (islower(a))
    {
        a = toupper(a);
        printf("%c", a);
    }


    // 2nd way to do that In ASCII use 


    if (a>= 'a' && a <= 'z')
    {
        int ans = a - 32;
        printf("%c",ans);
    }
    else {
        int ans = a + 32;
        printf("%c", ans);
    }
    
    

    return 0;
}