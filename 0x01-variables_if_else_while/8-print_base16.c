#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Prints all the numbers of base 16 in lowers case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '10' ; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a' ; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
