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
			_putchar(curr_val + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
