#include <stdio.h>
int main()
{
	int first[3][3], second[3][3], sum[3][3], i, j;
	printf("This is a program written in C to demonstrate the use of 2D array and nested loops");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("\nEnter the elements of the first matrix respectively: ");
			scanf("%d", &first[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("\nEnter the elements of the second matrix respectively: ");
			scanf("%d", &second[i][j]);
		}
	}
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			sum[i][j] = first[i][j] + second[i][j];
		}
	}
	printf("\n\nThe first matrix is:");
	for (i=0; i<3; i++)
	{
		printf("\n");
		for (j=0; j<3; j++)
		{
			printf("%d ", first[i][j]);
		}
	}
	printf("\n\nThe second matrix is:");
	for (i=0; i<3; i++)
	{
		printf("\n");
		for (j=0; j<3; j++)
		{
			printf("%d ", second[i][j]);
		}
	}
	printf("\n\nThe sum of the two matrices is:");
	for (i=0; i<3; i++)
	{
		printf("\n");
		for (j=0; j<3; j++)
		{
			printf("%d ", sum[i][j]);
		}
	}
	return 0;
}

