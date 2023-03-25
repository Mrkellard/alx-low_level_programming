#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

    /* Loop through the lowercase alphabet and print each letter */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');

	return (0);
}

