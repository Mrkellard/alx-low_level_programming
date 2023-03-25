#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the uppercase alphabet, then lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

    /* Loop through the uppercase alphabet and print each letter */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);
}

