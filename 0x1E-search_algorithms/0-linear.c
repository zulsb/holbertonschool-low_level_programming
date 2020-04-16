#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: Given array of int.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: Index ot the element or -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (!array)
		return (-1);

	for (; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
	}

	return (-1);
}
