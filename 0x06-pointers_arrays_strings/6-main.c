#include "main.h"
#include <stdio.h>

/**
 * main - entry point to check code
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "Captalize on what comes. \nhello world! hello-world"
	"Prepare for the worst.  Capitalize on what comes."
	"\nhello world! hello-world"
	"012345hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	/*printf(\"%s\", str);*/
	return (0);
}
