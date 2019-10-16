#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strdup - Pointer to a newly allocated space in memory
  *@str: pointer char
  *Return:a
  *
  */

char *_strdup(char *str)
{
	int o, s;
	char *a;

	if (str == '\0')
		return ('\0');
	for (o = 0; *(str + o); o++)
	{
	}
	a = malloc(sizeof(*a) * (o + 1));
	if (a == '\0')
	{
		return ('\0');
	}
		for (s = 0; s < o; s++)
		{
			a[s] = str[s];
		}
		return (a);
}
