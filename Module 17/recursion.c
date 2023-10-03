//Printing 1 to 5 using recursion
#include<stdio.h>
void fun(int i)
{
    if(i == 6) //Base case --> for stopping infinite calling function
    {
        return;
    }
    printf("%d\n", i);
    fun(i+1);
}
int main()

{

    fun(1);

    return 0;
}