#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of  using
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
		{
		putchar(ch);
		}

	putchar('\n');

	return (0);

}
