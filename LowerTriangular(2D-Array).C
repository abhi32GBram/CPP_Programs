#include <stdio.h>
int main()
{
    int i, j, rows, columns;
    int myArr[100][100];

    printf("\n PLEASE ENTER NUMBER OF ROWS AND COLUMNS  :  \n");
    scanf_s("%d %d", &i, &j);

    printf("\n PLEASE ENTER THE MATRIX ELEMENTS \n");
    for (rows = 0; rows < i; rows++)
    {
        for (columns = 0; columns < j; columns++)
        {
            scanf_s("%d", &myArr[rows][columns]);
        }
    }

    for (rows = 0; rows < i; rows++)
    {
        printf(" \n\n ");
        for (columns = 0; columns < j; columns++)
        {
            if (rows >= columns)
            {
                printf("%d ", myArr[rows][columns]);
            }
            else
            {
                printf(" 0 ");
            }
        }
    }

    return 0;
}