#include "holberton.h"

/**
  *_strspn - Gets the length of a prefix substring.
  *@s: pointer.
  *@accept: pointer.
  *Return: number bytes.
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, z;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
		{
			break;
		}
		else
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				{
					z++;
				}
			}
		}
	}
	return (z);
}
