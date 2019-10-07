#include "holberton.h"

/**
  *_memset - fill memory with a constant byte.
  *@s: pointer.
  *@b: variable.
  *@n: variable
  *Return: Memory area s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;

	return (s);


}
