#include "main.h"
/**
 * _strlen_recursion - prints the length of a str
 * @s: str to be counted
 * Return: len of str
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s != '\0')
	{
		return (count += _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
