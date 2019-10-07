#include "holberton.h"

/**
  *_memcpy - Copies memory area
  *@dest: pointer.
  *@src:pointer
  *@n: variable insigned.
  *Return: dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	dest[t] = src[t];

	return (dest);
}
