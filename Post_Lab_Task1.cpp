#include <stdio.h>
int main()
{
	int i, j;
	printf("This is a program written in C to print a pattern using nested loops");
	for (i=1; i<=8; i++)
	{
		printf("\n");
		for (j=1; j<=i; j++)
		{
			if (j % 4 == 0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
	}
	return 0;
}

