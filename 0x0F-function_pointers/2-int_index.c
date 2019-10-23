#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index - Function that searches for an integer.
  *@array: pointer.
  *@size: Number of elements in the array.
  *@cmp: pointer int.
  *Return: position.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int o;

	if (size <= 0)
	{
	return (-1);
	}

	if (array != '\0' && cmp != '\0')
	{
		for (o = 0; o < size; o++)
		{
			if (cmp(array[o]) != 0)
				return (o);
		}

	}
	return (-1);
}
