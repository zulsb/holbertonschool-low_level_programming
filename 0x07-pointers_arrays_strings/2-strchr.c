#include "holberton.h"

/**
  *_strchr - Locates a character in a string.
  *@s: pointer.
  *@c: varible.
  *Return: null.
  */

char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == c)
			return (s + p);
		if (s[p] == '\0')
			return (0);
	}
	return ('\0');

}
