#include "holberton.h"

/**
  *_strncat - Concatenates two strings.
  *@dest: first pointer.
  *@src: second pointer.
  *@n: varible.
  *Return: dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[b] > '\0')
		b++;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a + b] = src[a];
	}
	dest[a + b] = '\0';

	return (dest);
}
