#include "holberton.h"
#include <stdlib.h>

/**
  *argstostr - Concatenates all the arguments of your program.
  *@ac: variable int.
  *@av: pointer to pointer char.
  *Return: Pointer.
  */

char *argstostr(int ac, char **av)
{
	char *a;
	int x, t, o, z;

	o = 0;
	z = 0;

	if (ac == 0)
		return ('\0');
	if (av == '\0')
		return ('\0');

	for (x = 0; x < ac; x++)
	{
		for (t = 0; av[x][t] != '\0'; t++)
		{
		}
		z = z + t;
	}
	a = malloc(sizeof(char) * z + 1);
	if (a == '\0')
	return ('\0');
	for (x = 0; x < ac; x++)
	{
		for (t = 0; av[x][t] != '\0'; t++)
		{
			a[o] = av[x][t];
			o++;
		}
			a[o] = '\n';
			o++;
	}
	a[o] = '\0';
	return (a);

}
