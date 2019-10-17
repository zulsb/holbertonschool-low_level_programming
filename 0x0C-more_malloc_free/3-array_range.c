#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *array_range - Creates an array of integers.
  *@min: variable int minimo.
  *@max: variable int maximo.
  *Return: a.
  */

int *array_range(int min, int max)
{
	int o, n, *a;

	n = max - min + 1;

	if (min > max)
		return ('\0');
	a = malloc(sizeof(int) * n);
	if (a == '\0')
		return ('\0');
	for (o = 0; o < n; o++)
		*(a + o) = min++;
	return (a);
}
