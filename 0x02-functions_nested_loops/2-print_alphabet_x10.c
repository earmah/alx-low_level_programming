#include "main.h"

/**
 * print_alphabet_x10 - print the alphabetx10
 * Return: void
 */

void print_alphabet_x10(void)
{
	int repetition = 1;
	int count_alpha = 97;

	while (repetition < 11)
	{
		while (count_alpha < 123)
		{
			_putchar(count_alpha);
			count_alpha++;
		}
		count_alpha = 97;
		_putchar('\n');
		repetition++;
	}
}
