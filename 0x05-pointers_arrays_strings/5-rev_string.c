#include "holberton.h"

/**
  *rev_string - Function that reverses a string
  *@s: poinnter
  *Return: none.
  */

void rev_string(char *s)
{
	int a, b;
	char c, d;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++)
	{
		c = s[a];
		d = s[b];

		s[a] = d;
		s[b] = c;
		a--;
	}
}
