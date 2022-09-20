#include "main.h"
/**
 * _puts - print str with new line
 * @str: string to be printed
 * Return: empty
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putschar(*str);
	}
	_putschar('\n');
}
