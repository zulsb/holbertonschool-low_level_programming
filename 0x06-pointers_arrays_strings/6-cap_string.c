#include "holberton.h"

/**
  *cap_string - Capitalizes all words of a string
  *@s: pointer
  *Return: string concatenate.
  */

char *cap_string(char *s)
{
	int i, j;
	char t[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
					'(', ')', '{', '}', '\0'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (t[j] != '\0')
		{
			if (s[i] == t[j])
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			j++;
		}
	}
	return (s);
}
