#include "main.h"

/**
 * more_numbers - prints number 10 times
 * Return: void
 */

void more_numbers(void)
{
	int level;
	int curr_val;
	int count;

	for (level = 1; level <= 10; ++level)
	{
		for (curr_val = 0; curr_val <= 14; ++curr_val)
		{
			count = curr_val;
			if (curr_val > 9)
			{
				_putchar(1 + 48);
				count = curr_val % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
