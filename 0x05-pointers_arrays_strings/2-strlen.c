#include "holberton.h"

/**
 *_strlen - length of a string.
 *@s: pointer
 *Return: length of a string.
 */

int _strlen(char *s)
{
	int p = 0;

	while (*s != '\0')
	{
		p++;
		s++;
	}

	return (p);
}
