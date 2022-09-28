#include <stdio.h>
#include<conio.h>

int main_matrixToSparse()
{
	int myArr[100][100], sparse[100][100];
	int i, j, row, col, m;

	int sr = 1;
	int count = 1;

	printf("ENTER THE ORDER OF MATRIX  :");
	scanf_s("%d", &m);

	printf("ENTER THE ELEMENTS IN THE ARRAY : ");
	for (i = 0; i < m; i++) 
	{
		for (j = 0; j < m; j++) 
		{
			scanf_s("%d", &myArr[i][j]);
		}
	}

	printf("\n\n");

	printf("YOU'RE MATRIX IS : ");
	printf("\t\n");

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("\t %d", myArr[i][j]);
		}
		printf("\n");
	}

	sparse[0][0] = m;
	sparse[0][1] = m;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (myArr[i][j] != 0)
			{
				sparse[sr][0] = i;
				sparse[sr][1] = j;
				sparse[sr][2] = myArr[i][j];
				sr++;
				count++;
			}
		}
	}

	sparse[0][2] = count;
	printf("\n");

	printf("THE SPARSE MATRIX IS : \n");

	printf("\tROW" "\tCOLOUMN"  "\tVALUE \n\n");

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t %d", sparse[i][j]);
		}
		printf("\n");
	}
}
