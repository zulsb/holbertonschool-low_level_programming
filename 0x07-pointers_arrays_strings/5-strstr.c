#include "holberton.h"

/**
  *_strstr - Locates a substring
  *@haystack: pointer.
  *@needle: pointer
  *Return: null.
  */

char *_strstr(char *haystack, char *needle)
{

	unsigned int o = 0, s;

	char *h = haystack, *n = needle;


	while (needle[o] != '\0')

		o++;


	while (*haystack != '\0')

	{

		h = haystack;

		n = needle;

		for (s = 0; s <= o && *h == *n && *h != '\0' && *n != '\0'; s++)

		{

			h++;

			n++;

		}

		if ((s - o) == 0)

			return (haystack);

		haystack++;

	}

	return ('\0');
}
