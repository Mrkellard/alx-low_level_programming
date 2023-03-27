#include <stdio.h>
/**
 * main - entry point
 *
 * description: prints all possible diff. combination of 3 numbers
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				printf("%d%d%d", i, j, k);
				if (i < 7 || (i == 7 && j < 8) || (i == 7 && j == 8 && k < 9))
				{
					printf(", ");
				}
			}
		}
	}
	printf("\n");
	return (0);
}

