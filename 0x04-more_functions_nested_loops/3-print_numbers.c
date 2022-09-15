#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * Return: void
 */
void print_numbers(void)
{
	int curr_val;

	for (curr_val = 0; curr_val < 10; ++curr_val)
	{
		_putchar(curr_val + '0');
	}
	_putchar('\n');
}
