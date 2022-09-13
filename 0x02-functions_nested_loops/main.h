#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description -  this is a header file
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	putchar(95);
	putchar(112);
	putchar(117);
	putchar(116);
	putchar(99);
	putchar(104);
	putchar(97);
	putchar(114);
	putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	int count = 97;

	while (count < 123)
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return ;
}
