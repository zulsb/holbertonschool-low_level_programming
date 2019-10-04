#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @s: pointer
 *
 * Return: array.
 */
char *leet(char *s)
{
	int a, x;

	a = 0;

	char l[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char u[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char n[] = {'4', '3', '0', '7', '1', '\0'};

	while (s[a] != '\0')
	{
		for (x = 0; l[x] != '\0'; x++)
			if (s[a] == l[x] || s[a] == u[x])
				s[a] = n[x];
				a++;
	}

	return (s);
}
