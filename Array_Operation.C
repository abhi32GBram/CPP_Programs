#include<stdio.h>

int main_ArryaC()
{
    int aSize, bSize, mergedSize, i, j;
    int a[10], b[10], Merged[20];

    printf("\n ENTER THE FIRST ARRAY SIZE  :  ");
    scanf_s("%d", &aSize);

    printf("\nPLEASE ENTER THE FIRST ARRAY ELEMENTS :  ");
    for (i = 0; i < aSize; i++)
    {
        scanf_s("%d", &a[i]);
    }
    printf("\n ENTER THE SECOND ARRAY SIZE  :  ");
    scanf_s("%d", &bSize);
        
    printf("\nPLEASE ENTER THE SECOND ARRAY ELEMENTS  :  ");
    for (i = 0; i < bSize; i++)
    {
        scanf_s("%d", &b[i]);
    }

    for (i = 0; i < aSize; i++)
    {
        Merged[i] = a[i];
    }

    mergedSize = aSize + bSize;

    for (i = 0, j = aSize; j < mergedSize && i < bSize; i++, j++)
    {
        Merged[j] = b[i];
    }

    printf("\n a[%d]""\n ARRAY ELEMENTS AFTER MERGING \n", mergedSize);
    for (i = 0; i < mergedSize; i++)
    {
        printf(" %d \t ", Merged[i]);
    }

    return 0;
}