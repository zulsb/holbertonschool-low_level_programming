#include "holberton.h"

/**
  *string_toupper - changes lowercase letters of a string to uppercase.
  *@s: pointer
  *Return: pointer.
  *
  */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = s[x] - 32;
		}
	}
		return (s);
}
