#include "main.h"
/**
 * print_most_numbers - prints int w/o 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int curr_val;

	for (curr_val = 0; curr_val < 10; ++ curr_val)
	{
		if (curr_val == 2 || curr_val == 4)
		{
			continue;
		}
		else
		{
			_putchar(curr_val + '0');
		}
	}
	_putchar('\n');
}
