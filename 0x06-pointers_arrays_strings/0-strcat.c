#include "holberton.h"

/**
  **_strcat - Funtion concatenate.
  *@dest: First Pointer
  *@src: Second pointer
  *Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] > '\0')
		a++;

	while (src[b] > '\0')
	{
		dest[a + b] = src[b];
		b++;
	}

	dest[a + b] = '\0';

	return (dest);

}
