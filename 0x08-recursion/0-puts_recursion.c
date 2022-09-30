#include "main.h"
/**
 * _puts_recursion - prints a string ff by new line
 * @s: str to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s != '\n')
	{
		_putchar(*s);
		s++;
		_puts_recursion(*s);
	}
	else
	{
		_putchar('\n');
	}
}
