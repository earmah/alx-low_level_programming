/**
 * _memcpy - copies n bytes from memory area src to
 * mem area dest
 * @dest: mem area that bytes will be copied to
 * @src: mem area to copy from
 * @n: num of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
