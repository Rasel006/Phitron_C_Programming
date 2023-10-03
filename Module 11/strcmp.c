#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    if(v<0)
    {
        printf("A is smaller");
    }
    else if(v>0)
    {
        printf("B is smaller");
    }
    else{
        printf("same");
    }


    return 0;

}