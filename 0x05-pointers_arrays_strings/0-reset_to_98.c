#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: function that takes a pointer to an int as parameter and updates the value it points to to 98
 *
 * Return: Always 0 (Success)
 *
 */
void reset_to_98(int *n)
{
	*n = 98;

}

int main(void)
{
	int num = 5;
	int *ptr = &num;
	
	
	reset_to_98(ptr);

	// num is now 98
	
	return (0);

}

