#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: function that takes a pointer to an int as parameter and updates the value it points to to 98
 *
 * Return: Always 0 (Success)
 *
 */
void reset_to_98(int *n);

int main(void)
{
	int my_var = 10;
	
	printf("Before reset: %d\n", my_var);
	reset_to_98(&my_var);
	printf("After reset: %d\n", my_var);
	return 0;
}

void reset_to_98(int *n)
{
	   *n = 98;
}


