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

	str -= count / 2;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
