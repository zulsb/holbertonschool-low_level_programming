#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *malloc_checked - Allocates memory.
  *@b: variable unsigned int.
  *Return: exit.
  *
  */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == '\0')
	{
		exit(98);
	}
	return (a);
}
