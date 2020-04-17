#include "search_algos.h"
/**
 * p_arr - Function to print array everytime array is halved.
 * @array: Array.
 * @st_art: Start index of original array.
 * @e_nd: End index of original array.
 */
void p_arr(int *array, size_t st_art, size_t e_nd)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = st_art; i <= e_nd; i++)
	{
		if (i != e_nd)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - Function that searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: Given array of int.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: Index ot the element or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t st_art, mi_ddle, e_nd;

	if (!array)
		return (-1);

	for (st_art = 0, e_nd = size - 1; st_art <= e_nd;)
	{
		p_arr(array, st_art, e_nd);
		mi_ddle = (st_art + e_nd) / 2;
		if (array[mi_ddle] == value)
			return (mi_ddle);
		else if (array[mi_ddle] > value)
			e_nd = mi_ddle - 1;
		else
			st_art = mi_ddle + 1;

	}
	return (-1);
}
