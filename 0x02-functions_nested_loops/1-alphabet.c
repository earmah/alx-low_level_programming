#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * @void: empty
 *
 * Description - task 1;
 */

void print_alphabet(void)
{
	int count = 97;

	while (count < 123)
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
