#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 0 ; s <= 9 ; s++)
	{
		printf("%d", s);
	}
	printf("\n");
	return (0);

}
