

#include <stdio.h>
int main_transpose() 
{
    int myArr[10][10], transpose[10][10];
    int row, coloumn, i, j;
    printf("ENTE NUMBER OF ROWS AND COLOUMS : ");
    scanf_s("%d %d", &row, &coloumn);

    // ASSSIGNING ELEMENTS TO THE MATRIX
    printf("\nENTER ELEMENTS IN THE MATRIX \n");
    for (i = 0; i < row; ++i) 
    {
        for (j = 0; j < coloumn; ++j) 
        {
            printf("\nENTER THE ELEMENT [%d%d] : ", i + 1, j + 1);
            scanf_s("%d", &myArr[i][j]);
        }
    }
    // PRINTING THE MATRIX myArr[][]
    printf("\nYOU'RE MATRIX :  \n");
    for (i = 0; i < row; ++i) 
    {
        for (j = 0; j < coloumn; ++j) {
            printf("%d  ", myArr[i][j]);
            if (j == coloumn - 1)
            {
                printf("\n");
            }
        }
    }

    // COMPUTING THE TRANSPOSE OF THE MATRIX 
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < coloumn; ++j) 
        {
            transpose[j][i] = myArr[i][j];
        }
    }

    // PRINTING THE TRANSPOSED MATRIX 
    printf("\nTRANSPOSE OF THE MATRIX:\n");
    for (i = 0; i < coloumn; ++i) 
    {
        for (j = 0; j < row; ++j) 
        {
            printf("%d  ", transpose[i][j]);
            if (j == row - 1) 
            {
                printf("\n");
            }
        }
    }
    system("pause>0");
    return 0;
}