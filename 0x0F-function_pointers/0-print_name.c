/**
 * print_name - points to a func that prints a name
 * @name: name to be printed
 * @f: function that prints the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
