/*

row 3, col 3

3 0 0
0 3 0
0 0 3

*/

#include<stdio.h>

int main()

{

    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    int element = row * col;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1; 
    if(row != col)
    {
        flag = 0;
    }
    //Scalar matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == j)
            {
                if(arr[i][j] != arr[0][0])
                {
                    flag = 0;
                }
            }
            else if(arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("Scalar Matrix\n");
    }
    else
    {
        printf("Not Scalar Matrix\n");
    }
    return 0;
}