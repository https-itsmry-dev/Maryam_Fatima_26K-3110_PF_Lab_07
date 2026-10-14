#include <stdio.h>
int main()
{
	int product[5][3], i, j, grand_total = 0;
	printf("This is a program written in C to demonstrate the use of 2D array and nested loops");
	for (i=0; i<5; i++)
	{
		for (j=0; j<2; j++)
		{
			if (j == 0)
			{
				printf("\nEnter the quantity of each product respectively: ");
			}
			else
			{
				printf("\nEnter the unit price of each product respectively: ");
			}
			scanf("%d", &product[i][j]);
		}
	}
	printf("\nQuantity\tUnit Price\tTotal Price");
	for (i=0; i<5; i++)
	{
		product[i][2] = product[i][0] * product[i][1];
		printf("\n");
		for (j=0; j<3; j++)
		{
			printf("%d\t\t", product[i][j]);
			if (j == 2)
			{
				grand_total = grand_total + product[i][j];
			}
		}
	}
	printf("\nThe grand total of all products is: %d", grand_total);
	return 0;
}


