#include<stdio.h>

int main()

{

    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }
    long long int x;
    scanf("%lld", &x);
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }
    return 0;
}