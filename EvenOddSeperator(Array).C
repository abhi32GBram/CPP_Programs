#include <stdio.h>

void main_EvennOdd()
{
    int arr1[10], arr2[10], arr3[10];
    int i, j = 0, k = 0, n, sumEven = 0, sumOdd = 0;

    printf(" ----------------------------------------");
    printf("\n EVEN AND ODD SEPERATOR\n");
    printf("\n---------------------------------------- \n");
            
    printf("ENTER THE ELEMENTS TO BE SEPERATED  :");
    scanf_s("%d", &n);

    printf("INPUT  %d ELEMETS IN THE ARRAY  :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("ELEMENTS -  %d : ", i);
        scanf_s("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    printf("\nTHE EVEN ELEMENTS ARE : \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr2[i]);
    }
    for (i = 0; i < j; i++) 
    {
        sumEven = sumEven +  arr2[i];
    }
    printf("\nSUM OF THE EVEN ELEMENTS IS : %d",sumEven);

    printf("\n---------------------------------------------------");
    printf("\n THE ODD ELEMENTS ARE :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    for (i = 0; i < k; i++)
    {
        sumOdd = sumOdd + arr3[i];
    }
    printf("\nSUM OF THE ODD ELEMENTS IS : %d", sumOdd);
    printf("\n\n");
}
