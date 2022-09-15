#include "main.h"

/**
 * print_sign - prints sign of input
 * @n: inputted int
 * Return: 1 if pos, 0 if 0, -1 if neg
 */

int print_sign(int n)
{
	int pos = 43;
	int neg = 45;
	int zer = 48;

	if (n == 0)
	{
		_putchar(zer);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(pos);
		return (1);
	}
	else
	{
		_putchar(neg);
		return (-1);
	}
}
