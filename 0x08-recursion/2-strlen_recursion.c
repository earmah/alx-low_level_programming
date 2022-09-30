#include "main.h"
/**
 * _strlen_recursion - prints the length of a str
 * @s: str to be counted
 * Return: len of str
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count += _strlen_recursion(s + 1);
	}
	return (count - 1);
}
