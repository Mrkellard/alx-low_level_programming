#include <stdio.h>
/**
 * main - Entry point
 *
 * description: prints all possible different combinationvof two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			printf("%d%d", i, j);
			if (i < 8 || j < 9)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}

