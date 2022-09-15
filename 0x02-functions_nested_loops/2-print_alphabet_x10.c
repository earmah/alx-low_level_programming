#include "main.h"
/**
 * print_alphabet_x10: print the alphabetx10
 * @void: empty
 *
 * Description - print alphabet x10
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
		repetition++;
	}
}
