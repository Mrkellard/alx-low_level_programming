#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all single digit numbers of base 10
 *
 * return: always 0 (success)
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
