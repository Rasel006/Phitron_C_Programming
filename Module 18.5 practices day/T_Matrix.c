#include<stdio.h>
#include<stdlib.h>
int main()

{

    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum_pr_dig = 0;
    int sum_sec_dig= 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum_pr_dig = sum_pr_dig + arr[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i+j) == (n - 1))
            {
                sum_sec_dig = sum_sec_dig + arr[i][j];
            }
        }
    }

    printf("%d\n", abs(sum_pr_dig - sum_sec_dig));
    return 0;
}