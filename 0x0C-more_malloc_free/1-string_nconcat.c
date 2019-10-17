#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *string_nconcat - concatenate two strings.
  *@s1: first pointer.
  *@s2: second pointer.
  *@n: variable integer unsigned.
  *Return: a.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int o, t, tr, f;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	for (o = 0; s1[o] != '\0'; o++)
	{
	}
	for (t = 0; s2[t] != '\0'; t++)
	{
	}
	if (t <= n)
		n = t;
	a = malloc(sizeof(*a) * ((o + n) + 1));
	if (a == '\0')
		return ('\0');
	for (tr = 0; tr < o; tr++)
		a[tr] = s1[tr];
	for (f = 0; f < n; f++)
	{
		a[o + f] = s2[f];
	}
	a[o + f] = '\0';

	return (a);
}

