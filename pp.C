
#include <stdio.h>

void main_Sum_Reverse_Array()
{
    int a[10], b[10], c[10], n, i;

    // ADDING ELEMENTS OF 
    printf("Enter the number of elements:\t");
    scanf_s("%d", &n);

    printf("Enter %d elements for array 1:\n", n);

    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);

    printf("Enter %d elements for array 2:\n", n);

    for (i = 0; i < n; i++)
        scanf_s("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf("Sum of two array elements are:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", c[i]);
// ----------------------------------------------------------
    int arr[] = { 1, 2, 3, 4, 5 };

    //Calculate length of array arr    
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Array in reverse order: \n");
    //Loop through the array in reverse order    
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

}