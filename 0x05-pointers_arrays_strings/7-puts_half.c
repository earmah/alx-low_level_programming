#include "main.h"
/**
 * puts_half - print 2nd half of str
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	count = (count) / 2;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
