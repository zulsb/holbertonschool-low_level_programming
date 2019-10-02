#include "holberton.h"

/**
  *print_array - Prints n elements of an array of integers.
  *@a: Pointer.
  *@n: Variable.
  *Return: none.
  */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x > 0)
		printf(", ");
		printf("%d", *(a + x));

	}

	printf("\n");
}
