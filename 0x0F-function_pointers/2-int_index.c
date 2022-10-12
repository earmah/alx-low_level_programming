/**
 * int_index - searches for an int
 * @array: arr to parse
 * @size: size of array
 * @cmp: function to detect int
 * Return: index of int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;
	int cmp_rtn;
	int tmp_elem;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array != NULL && size > 0 && cmp != NULL)
	{
		for (count = 0; count < size; count++)
		{
			tmp_elem = array[count];
			cmp_rtn = cmp(tmp_elem);

			if (cmp_rtn != 0)
			{
				return (count);
			}
		}
		if (count >= size)
		{
			return (-1);
		}
	}
	return (-1);	
}
