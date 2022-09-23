#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[] = "hello";
	char s2[] = "world!";
	
	printf("%d\n", _strcmp(s1, s2));
	return (0);
}
