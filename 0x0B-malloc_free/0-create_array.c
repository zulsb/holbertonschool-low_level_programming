#include "holberton.h"
#include <stdlib.h>
/**
  *create_array - Creates an array of chars
  *@c: char
  *@size: memory to print.
  *Return: a from array.
  */

char *create_array(unsigned int size, char c)
{
	unsigned int o;
	char *a;

	a = malloc(sizeof(c) * size);

	if (size == 0)
		return ('\0');
	if (a == '\0')
		return ('\0');
	for (o = 0; o < size; o++)
	{
		a[o] = c;
	}
	return (a);
}
