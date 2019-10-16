#include "holberton.h"
#include <stdlib.h>

/**
  *str_concat - Concatenates two strings.
  *@s1: pointer char one.
  *@s2: pointer char two.
  *Return: a.
  */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int o, t, tr, f;

	for (o = 0; s1[o] != '\0'; o++)
	{

	}
	for (t = 0; s2[t] != '\0'; t++)
	{

	}

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	a = malloc(sizeof(*a) * (o + t + 1));
	if (a == '\0')
		return ('\0');
	for (tr = 0; tr < o; tr++)
		a[tr] = s1[tr];
	for (f = 0; f < t; f++)
	{
		a[o + f] = s2[f];
	}

	return (a);
}

