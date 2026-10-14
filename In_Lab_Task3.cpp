#include <stdio.h>
int main()
{
	int i, j;
	printf("This is a program written in C to print a pattern using nested loops");
	for (i=1; i<=5; i++)
	{
		printf("\n");
		for (j=1; j<=i; j++)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

