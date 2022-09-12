#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description - print all combos of single digits
 * Return: 0
 */

int main(void)
{
	int val = 48;

	while (val < 58)
	{
		putchar(val);
		putchar(44);
		putchar(32);
		val++;
	}
	putchar('\n');
	return (0);
}
