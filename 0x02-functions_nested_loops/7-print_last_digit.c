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
		last = -1 * (c % 10);
	}
	else
	{
		last = c % 10;
	}
	_putchar(last + '0');
	return (last);
}
