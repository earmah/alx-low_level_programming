#include "main.h"
/**
 * print_rev - print str in reverse
 * @s: str
 * Return: void
 */

void print_rev(char *s)
{
	char str[] = "";
	int count = 0;

	while (*s != '\0')
	{
		str[count] = *s;
		count++;
		s++;
	}
	count--;
	while (count > -1)
	{
		_putchar(str[count]);
		count--;
	}
	_putchar('\n');
}
