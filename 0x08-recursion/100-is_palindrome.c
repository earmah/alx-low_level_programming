#include "main.h"

/**
 * palindrome_wrapper - iterates each char to compare
 * @forward: counter for each char left to right
 * @back: counter for each char right to left
 * @s: original string
 *
 * Return: 0 if no match, 1 if match
 */

int palindrome_wrapper(int forward, char *s, int back)
{
	while (forward != back || back - forward > 1)
	{
		if (s[forward] != s[back])
		{
			return (0);
		}
		else
		{
			return (1 * palindrome_wrapper(forward + 1, s, back - 1));
		}
	}
	return (1);
}

/**
 * is_palindrome - receive original str and check if palindrome
 * @s: original string
 *
 * Return: 0 if not palin, 1 if palin
 */

int is_palindrome(char *s)
{
	int i, forward = 0, back = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		back += 1;
	}

	back -= 1;

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (palindrome_wrapper(forward, s, back));
	}
}
