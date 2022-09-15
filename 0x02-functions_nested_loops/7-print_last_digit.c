#include "main.h"

/**
 * print_last_digit - prints the last dig
 * @c: input val
 * Return: last dig
 */

int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		c = c * -1;
	}
	last = c % 10;
	_putchar(last);
	return (last);
}
