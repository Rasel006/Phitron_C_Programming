#include<stdio.h>

int main()

{

    int arr[5][3];
    for(int i = 0; i < 5; i++) //loop for controlling row
    {
        for(int j = 0; j < 3; j++) //loop for controlling coloum
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    printf("\n");
    for(int i = 0; i < 5; i++) //loop for controlling row
    {
        for(int j = 0; j < 3; j++) //loop for controlling coloum
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}