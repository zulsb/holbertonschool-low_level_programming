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
	int o, *a;

	if (min > max)
		return ('\0');
	a = malloc(sizeof(int) * max - min + 1);
	if (a == '\0')
		return ('\0');
	for (o = 0; o <= (max - min + 1); o++)
		*(a + o) = min++;
	return (a);
}
