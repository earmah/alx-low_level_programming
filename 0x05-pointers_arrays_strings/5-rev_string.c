#include "main.h"
/**
 * rev_string - prints whole string in rev
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char str[] = " ";
	int count = 0;

	while (*s != '\0')
	{
		str[count] = s;
		s++;
		count++;
	}
	count--;
	while (count >= 0)
	{
		_putchar(str[count]);
		count--;
	}
