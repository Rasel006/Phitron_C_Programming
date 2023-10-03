#include<stdio.h>

int main()

{

    long long int n;
    long long int k;
    scanf("%lld %lld", &n, &k);
    long long int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = 0;
    //Sorting array
    long long int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                long long int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp; 
            }
        }
    }
    for(long long int i = 0; i < k; i++)
    {
        
        if(sum + arr[i] > sum)
        sum = sum + arr[i];
    }
    printf("%lld\n", sum);
    return 0;
}