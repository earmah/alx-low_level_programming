#include "main.h"

/**
 * print_to_98 - print num up ot 98
 * @a: starting num
 * Return: void
 */

void print_to_98(int a)
{
	_putchar('0' + a);

	while (a <= 98)
	{
		a++;
		_putchar(',');
		_putchar(' ');
		_putchar('0' + a);
	}

	while (a >= 98)
	{
		a--;
		_putchar(',');
		_putchar(' ');
		_putchar('0' + a);
	}
}
	
