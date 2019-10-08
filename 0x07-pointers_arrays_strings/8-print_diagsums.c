#include "holberton.h"
#include <stdio.h>

/**
  *print_diagsums - Sum of the two diagonals of a square matrix.
  *@a: pointer.
  *@size: varieble int.
  *
  */

void print_diagsums(int *a, int size)
{
	int s, t, w, suma1, suma2;

	t = 0;
	w = size - 1;
	suma1 = 0;
	suma2 = 0;

	for (s = 0; s < size; s++)
	{
	suma1 += a[t];
	suma2 += a[w];
	t += size + 1;
	w += size - 1;
	}

	printf("%i, %i\n", suma1, suma2);

}
