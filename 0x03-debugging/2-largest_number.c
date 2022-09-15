#include "main.h"

/**
 * largest_number - prints the largest number of 3 numbers
 * @a: first num
 * @b: second num
 * @c: third num
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest  = c;
	}

	return (largest);
}
