#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description - print alpha in reverse
 * Return: 0
 */

int main(void)
{
	int alpha = 122;
	char nl = '\n'

	while (alpha > 96)
	{
		putchar(alpha);
		alpha--;
	}
	putchar(nl);
	return (0);
}
