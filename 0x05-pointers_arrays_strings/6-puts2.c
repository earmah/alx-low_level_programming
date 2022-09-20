#include "main.h"
/**
 * puts2 - print every other char
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if ((count % 2) == 0)
		{
			_putchar(str[count] + '0');
		}
		else
		{
			continue;
		}
		count++;
	}
	_putchar('\n');
}
