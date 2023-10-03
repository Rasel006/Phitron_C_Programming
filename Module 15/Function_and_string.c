#include<stdio.h>
#include<string.h>
void fun(char *str) //we don't need to pass the size of string here
{
    printf("%d\n", strlen(str)); //work can be done by using strlen() fucntion
    for(int i = 0; i < strlen(str); i++)
    printf("%c", str[i]);
}

int main()

{

    char str[20] = "Niloy Khan"; 
    fun(str);

    return 0;
}