#include "function_pointers.h"

/**
 * int_index - entry point to search for an integer
 * @array: array needed
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);

	return (i);
}
