/**
 * _strstr - find first occurence of a substr in a str
 * @haystack: the str to be parsed
 * @needle: the substr to look for
 * Return: pointer to the beg of located substr in haystk
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack++;
	}
	return ('\0');
}
