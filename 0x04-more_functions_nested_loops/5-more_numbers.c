#include "main.h"

/**
 * more_numbers - prints number 10 times
 * Return: void
 */

void more_numbers(void)
{
	int level;
	int curr_val;

	for (level = 0; level < 10; ++level)
	{
		for (curr_val = 0; curr_val < 15; ++curr_val)
		{
				putchar_long(curr_val);
		}
		_putchar('\n');
		curr_val = 0;
	}
	_putchar('\n');
}

/**
 * putchar_long - converts and prints long ints using putchar
 * @c: long int
 * Return: void
 */

void putchar_long(int c)
{
	if (c / 10)
	{
		putchar_long(c / 10);
	}
	_putchar(c % 10 + '0');
}
