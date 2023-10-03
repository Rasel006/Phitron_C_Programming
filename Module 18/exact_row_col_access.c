#include<stdio.h>

int main()

{

    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //Exact row
    /*int row_num;
    scanf("%d", &row_num);
    printf("\n\n");
    for(int i = 0; i < col; i++)
    {
        printf("%d ", arr[row_num][i]);
    }*/

    //Exact col
    int col_num;
    scanf("%d", &col_num);
    printf("\n\n");
    for(int i = 0; i < row; i++)
    {
        printf("%d\n", arr[i][col_num]);
    }
    return 0;
}