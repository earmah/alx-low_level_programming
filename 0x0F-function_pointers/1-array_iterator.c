/**
 * array_iterator - executes a fcn for each elem
 * of an array
 * @array: arr to iterate
 * @size: size of arr
 * @action: function to fun
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;
	int temp;

	for (count = 0; count < size; count++)
	{
		temp = *array;
		action(temp);
		array++;
	}

}
