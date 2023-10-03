//Printing 5 t0 1 but function receiving 1

#include<stdio.h>
void fun(int i)
{
    if(i == 6) return;
    fun(i+1);
    printf("%d\n", i);
}
int main()

{

    fun(1);

    return 0;
}




/*

#include<stdio.h>
void fun(int i)
{
    if(i > 10){
        return;
    }
    fun(i+2);
    printf("%d\n", i);
}
int main()

{

    fun(0);

    return 0;
}

*/