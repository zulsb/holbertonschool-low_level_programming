#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *array_iterator - Given as a parameter on each element of an array.
  *@array: pointer int.
  *@size: size of the array.
  *@action: pointer to the function.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int o;

	if (array != NULL && action != NULL)
		for (o = 0; o < size; o++)
		{
			action(*(array + o));
		}


}
