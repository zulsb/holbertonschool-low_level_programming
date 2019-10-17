#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_calloc - Allocates memory for an array.
  *@nmemb: variable unsigned int.
  *@size: variable unsigned int.
  *Return: a.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int o;
	char *a;

	if (nmemb == 0 || size == 0)
		return ('\0');
	a = malloc(nmemb * size);
	if (a == '\0')
		return ('\0');
	for (o = 0; o < (nmemb * size); o++)
	{
		a[o] = 0;
	}
	return (a);
}
