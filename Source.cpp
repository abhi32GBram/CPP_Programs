//#include <iostream>
//using namespace std;
//
//int mainse()
//{
//
//
//
//
//
//
//	return 0;
//	system("pause>0");
//}
//
//
//
//
//#include <stdio.h>
//int main_a() {
//    int a[10][10], transpose[10][10], r, c;
//    printf("Enter rows and columns: ");
//    scanf("%d %d", &r, &c);
//
//    // asssigning elements to the matrix
//    printf("\nEnter matrix elements:\n");
//    for (int i = 0; i < r; ++i)
//        for (int j = 0; j < c; ++j) {
//            printf("Enter element a%d%d: ", i + 1, j + 1);
//            scanf("%d", &a[i][j]);
//        }
//
//    // printing the matrix a[][]
//    printf("\nEntered matrix: \n");
//    for (int i = 0; i < r; ++i)
//        for (int j = 0; j < c; ++j) {
//            printf("%d  ", a[i][j]);
//            if (j == c - 1)
//                printf("\n");
//        }
//
//    // computing the transpose
//    for (int i = 0; i < r; ++i)
//        for (int j = 0; j < c; ++j) {
//            transpose[j][i] = a[i][j];
//        }
//
//    // printing the transpose
//    printf("\nTranspose of the matrix:\n");
//    for (int i = 0; i < c; ++i)
//        for (int j = 0; j < r; ++j) {
//            printf("%d  ", transpose[i][j]);
//            if (j == r - 1)
//                printf("\n");
//        }
//    return 0;
//}
// -------------------------------------------
//
//#include <stdio.h>
//
//void main()
//{
//    int arr1[10][10], i, j, n;
//    float determinant = 0;
//
//
//    printf("\n\nDisplay the upper triangular of a given matrix :\n");
//    printf("----------------------------------------------\n");
//
//    printf("Input the size of the square matrix : ");
//    scanf("%d", &n);
//    printf("Input elements in the first matrix :\n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("element - [%d],[%d] : ", i, j);
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    printf("The matrix is :\n");
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//            printf("% 4d", arr1[i][j]);
//        printf("\n");
//    }
//
//    printf("\nSetting zero in upper triangular matrix\n");
//    for (i = 0; i < n; i++)
//    {
//        printf("\n");
//        for (j = 0; j < n; j++)
//            if (i >= j)
//                printf("% 4d", arr1[i][j]);
//            else
//                printf("% 4d", 0);
//    }
//    printf("\n\n");
//}
// -----------------------------------
//
//*C program to find upper triangular matrix* /
//
//#include<stdio.h>
//void UpperTriangularMatrix(int row, int col)
//{
//    int a[row][col];
//    printf("\nEnter the Elements \n");
//
//    // Nested loop to input array elements from the user
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    printf("Required Matrix : ");
//    // Nested loop to print upper triangular matrix  
//    for (int i = 0; i < row; i++)
//    {
//        printf("\n");
//        for (int j = 0; j < col; j++)
//        {
//            // Check if column >= row
//            if (j >= i)
//                printf(" %d ", a[i][j]);
//            else
//                printf(" 0 ");
//        }
//    }
//}
//
//int main()
//{
//    int row, col;
//
//    // Input number of rows and columns by the user
//    printf("\nEnter Number of rows : ");
//    scanf("%d", &row);
//
//    printf("\nEnter Number of columns : ");
//    scanf("%d", &col);
//
//    // Calling Upper triangular Matrix function 
//    UpperTriangularMatrix(row, col);
//
//    return 0;
