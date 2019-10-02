#include "holberton.h"
#include <stdio.h>
/**
  *print_array - Prints n elements of an array of integers.
  *@a: array.
  *@n: Variable.
  *Return: none.
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", *(a + i));
	}
		printf("\n");
}
