#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printsn the lowercase in reverse order
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar ('\n');
	return (0);
}
