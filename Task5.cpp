#include <stdio.h>
int main()
{
	int matrix[3][3], i, j;
	int null_matrix = 1, diagonal = 1, upper = 1, lower = 1;
	printf("This is a program written in C to demonstrate the use of 2D array and nested loops");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("\nEnter the elements of the 3x3 matrix respectively: ");
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\nThe entered matrix is:");
	for (i=0; i<3; i++)
	{
		printf("\n");
		for (j=0; j<3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if (matrix[i][j] != 0)
			{
				null_matrix = 0;
			}
			if (i != j && matrix[i][j] != 0)
			{
				diagonal = 0;
			}
			if (i > j && matrix[i][j] != 0)
			{
				upper = 0;
			}
			if (i < j && matrix[i][j] != 0)
			{
				lower = 0;
			}
		}
	}
	printf("\n\nThe types of the matrix are:");
	if (null_matrix == 1)
	{
		printf("\nNull Matrix");
	}
	if (diagonal == 1)
	{
		printf("\nDiagonal Matrix");
	}
	if (upper == 1)
	{
		printf("\nUpper Triangular Matrix");
	}
	if (lower == 1)
	{
		printf("\nLower Triangular Matrix");
	}
	if (null_matrix == 0 && diagonal == 0 && upper == 0 && lower == 0)
	{
		printf("\nThe matrix is not a Null, Diagonal, Upper Triangular or Lower Triangular Matrix");
	}
	printf("\n\nThe diagonal elements are: ");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if (i == j)
			{
				printf("%d ", matrix[i][j]);
			}
		}
	}
	printf("\nThe upper triangular elements are: ");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if (i <= j)
			{
				printf("%d ", matrix[i][j]);
			}
		}
	}
	printf("\nThe lower triangular elements are: ");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			if (i >= j)
			{
				printf("%d ", matrix[i][j]);
			}
		}
	}
	return 0;
}


