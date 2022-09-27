#include<stdio.h>
void UpperTriangularMatrix(int row, int col)
{
    int myArr[100][100];
    printf("\nENTER THE ELEMENTS : \n");

    // INPUT ARRAY ELEMENTS FROM THE USER
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf_s("%d", &myArr[i][j]);
        }
    }

    // NESTED LOOP TO PRINT UPPER TRIANGULAR MATRIX  
    printf("UPPER TRIANGULAR ELEMENTS OF THE MATRIX ARE :  \n");
    
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
        {
            // CHECK IF COLUMNS ARE GREATER THAN ROWS
            if (j >= i)
                printf(" %d ", myArr[i][j]);
            else
                printf(" 0 ");
        }
    }
}

int main_UTri()
{
    int row, col;

    // INPUT NUMBER OF ROWS AND COLUMNS BY THE USER
    printf("\nENTER NUMBER OF ROWS : ");
    scanf_s("%d", &row);

    printf("\nENTER NUMBER OF COLUMNS : ");
    scanf_s("%d", &col);

    // CALLING UPPER TRIANGULAR MATRIX FUNCTION 
    UpperTriangularMatrix(row, col);
    return 0;
}