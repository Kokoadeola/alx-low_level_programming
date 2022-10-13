#include "function_pointers.h"

/**
 * int_index - indexes array i
 * @array: array to go through
 * @size: array size
 * @cmp: pointer to the function to be used
 *
 * Return: index of the first element for which the cmp
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
