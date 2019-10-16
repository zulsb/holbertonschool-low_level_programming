#include "holberton.h"
#include <stdlib.h>

/**
  *alloc_grid - Pointer to a 2 dimensional array of integers.
  *@width: variable.
  *@height: variable int.
  *Return: NULL.
  */

int **alloc_grid(int width, int height)
{
	int c, s;
	int **a;

	if (width < 1 || height < 1)
		return ('\0');

	a = malloc(sizeof(*a) * height);
	if (a == '\0')
		return ('\0');
	for (c = 0; c < height; c++)
	{
	a[c] = malloc(sizeof(int) * width);

	if (a[c] == '\0')
	{
	for (c--; c >= 0; c--)
		free(a[c]);
	free(a);
	return ('\0');
	}
	for (s = 0; s < width; s++)
		a[c][s] = 0;
	}
		return (a);
}

