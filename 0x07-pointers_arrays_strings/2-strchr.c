/**
 * _strchr - locates a chr in a str
 * @s: string param to be parsed
 * @c: char param being searched for
 * Return: pointer to c first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
