#include "main.h"
/**
 * puts2 - print every other char
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int count;
	
	for (; str[count] != '\0'; count++)
	{
		if ((count % 2) == 0)
		{
			_putchar(str[count]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
