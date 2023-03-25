#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of  using putchar
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch < 10 ; ch++)
		{
		putchar(ch);
		}

	putchar('\n);

	return (0);

}
