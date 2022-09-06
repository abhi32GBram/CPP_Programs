#include <stdio.h>
int main_star()
{
	int n, m = 1;
	printf("ENTER THE NUMBER OF ROWS : ");
	scanf_s("%d", &n);

	for (int i = n; i >= 1; i--) 
	{
		for (int j = 1; j <= i; j++) 
		{
			if (j == 1 || j == i || i == n) 
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}