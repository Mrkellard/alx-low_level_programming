#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - Reset a given integer variable to the value 98.
 *
 * @n: Pointer to an integer variable to reset.
 *
 * Return: None.
 */
void reset_to_98(int *n);
/**
 * main - Entry point
 *
 * Description: Demonstrates the use of the reset_to_98 function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
/**
 * reset_to_98 - Reset a given integer variable to the value 98.
 *
 * @n: Pointer to an integer variable to reset.
 *
 * Description: Implement the function
 */
void reset_to_98(int *n)
{
	*n = 98;
}


