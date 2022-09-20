#include "main.h"
/**
 * print_rev - print str in reverse
 * @s: str
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	
	while (count >= 0)
	{
		_putchar(str[count]);
		count--;
	}
	_putchar('\n');
}
