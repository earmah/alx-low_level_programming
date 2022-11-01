#include <unistd.h>

/**
 * _putchar - writes the char to s to stdout
 * @s: char to print
 *
 * Return: 0 success; 1 fail
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
