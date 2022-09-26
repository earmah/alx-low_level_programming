/**
 * _strchr - locates a chr in a str
 * @s: string param to be parsed
 * @c: char param being searched for
 * Return: pointer to c first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (s[count]);
		}
	}
	return (NULL);
}
