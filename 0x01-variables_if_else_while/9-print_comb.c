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

	putchar(val);
	val++;
	while (val < 58)
	{
		putchar(44);
		putchar(32);
		putchar(val);
		val++;
	}
	putchar('\n');
	return (0);
}
