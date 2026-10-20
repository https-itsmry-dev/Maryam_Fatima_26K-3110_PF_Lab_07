#include <stdio.h>
int main()
{
	int marks[4][2], i, j, total, total_mid = 0, total_final = 0;
	int highest_mid, highest_final, highest_overall, lowest_mid, lowest_final, lowest_overall;
	float average_mid, average_final;
	printf("This is a program written in C to demonstrate the use of 2D array and nested loops");
	for (i=0; i<4; i++)
	{
		for (j=0; j<2; j++)
		{
			if (j == 0)
			{
				printf("\nEnter the Mid marks of each student respectively: ");
			}
			else
			{
				printf("\nEnter the Final marks of each student respectively: ");
			}
			scanf("%d", &marks[i][j]);
		}
	}
	printf("\n\n===========Total Marks of Each Student===========");
	for (i=0; i<4; i++)
	{
		total = marks[i][0] + marks[i][1];
		printf("\nThe total marks of student %d are: %d", i+1, total);
	}
	highest_mid = marks[0][0];
	highest_final = marks[0][1];
	lowest_mid = marks[0][0];
	lowest_final = marks[0][1];
	for (i=0; i<4; i++)
	{
		total_mid = total_mid + marks[i][0];
		total_final = total_final + marks[i][1];
		if (marks[i][0] > highest_mid)
		{
			highest_mid = marks[i][0];
		}
		if (marks[i][1] > highest_final)
		{
			highest_final = marks[i][1];
		}
		if (marks[i][0] < lowest_mid)
		{
			lowest_mid = marks[i][0];
		}
		if (marks[i][1] < lowest_final)
		{
			lowest_final = marks[i][1];
		}
	}
	if (highest_mid > highest_final)
	{
		highest_overall = highest_mid;
	}
	else
	{
		highest_overall = highest_final;
	}
	if (lowest_mid < lowest_final)
	{
		lowest_overall = lowest_mid;
	}
	else
	{
		lowest_overall = lowest_final;
	}
	average_mid = (float)total_mid / 4;
	average_final = (float)total_final / 4;
	printf("\n\n===========Highest Marks===========");
	printf("\nThe highest marks in Mid are: %d", highest_mid);
	printf("\nThe highest marks in Final are: %d", highest_final);
	printf("\nThe highest marks overall are: %d", highest_overall);
	printf("\n\n===========Lowest Marks===========");
	printf("\nThe lowest marks in Mid are: %d", lowest_mid);
	printf("\nThe lowest marks in Final are: %d", lowest_final);
	printf("\nThe lowest marks overall are: %d", lowest_overall);
	printf("\n\n===========Average Marks===========");
	printf("\nThe average of Mid marks is: %.2f", average_mid);
	printf("\nThe average of Final marks is: %.2f", average_final);
	return 0;
}
