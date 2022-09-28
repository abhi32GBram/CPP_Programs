//#include <stdio.h>
//#include<conio.h>
//
//int main()
//{
//	int myArr[100][100];
//	int i, j, m;
//	int sum1 = 0;
//	int sum2 = 0;
//
//	printf("ENTER ORDER OF MATRIX,N (NXN) : ");
//	scanf_s("%d", &m);
//
//	printf("ENTER THE ELEMENTS IN THE ARRAY  :");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf_s("%d", &myArr[i][j]);
//		}
//	}
//
//
//	printf("\n\n");
//
//	printf("YOU'RE MATRIX IS  : \n");
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf(myArr[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("THE ADDITION OF DIAGONAL ELEMETNS ARE  : \n");
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (i == j)
//			{
//				sum1 += myArr[i][j];
//			}
//			if (i + j == (m - 1))
//			{
//				sum2 += myArr[i][j];
//			}
//		}
//	}
//
//	int netSum = sum1 + sum2;
//	printf("\n");
//
//	print("THE SUM OF DIAGONAL ELEMENTNS IS : \n", sum1);
//	print("THE SUM OF DIAGONAL ELEMENTNS IS : \n", sum2);
//
//	print("THE SUM OF BOTH DIAGONAL ELEMENTNS IS:  \n", netSum);
//
//
//}