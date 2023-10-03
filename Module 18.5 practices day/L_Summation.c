#include<stdio.h>
long long int fun(long long int arr[], long long int size, int i)
{   if(i == size)
    {
        return 0;
    }
    long long int s;
    s = arr[i] + fun(arr, size, i+1);
    return s;
}
int main()

{

    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);

    }

    long long int sum = fun(arr, n, 0);
    printf("%lld\n", sum);

    return 0;
}