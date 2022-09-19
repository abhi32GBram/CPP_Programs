
#include<stdio.h>

/* Function prototype */
void reverse(int a[100], int n);

void main_arr()
{
	int a[100], i, n;
	/*clrscr();*/
	printf("Enter n:\n");
	scanf_s("%d", &n);
	/* Reading array */
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
	/* Function Call */
	reverse(a, n);
	/* Displaying reversed array */
	printf("Reversed array is:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
/* Function definition for reverse */
void reverse(int a[10], int n)
{
	int i, temp;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}







//#include <stdio.h>
//void main()
//{
//    int a[10], b[10], c[10], n, i;
//
//    // ADDING ELEMENTS OF 
//    printf("Enter the number of elements:\t");
//    scanf_s_s("%d", &n);
//
//    printf("Enter %d elements for array 1:\n", n);
//
//    for (i = 0; i < n; i++)
//        scanf_s_s("%d", &a[i]);
//
//    printf("Enter %d elements for array 2:\n", n);
//
//    for (i = 0; i < n; i++)
//        scanf_s_s("%d", &b[i]);
//
//    for (i = 0; i < n; i++)
//        c[i] = a[i] + b[i];
//
//    printf("Sum of two array elements are:\n");
//
//    for (i = 0; i < n; i++)
//        printf("%d\n", c[i]);
//}