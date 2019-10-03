#include "holberton.h"

/**
  *_strcmp - Function that compares two strings.
  *@s1: First pointer.
  *@s2: second pointer.
  *Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			break;
		}
		a++;
	}

	return (s1[a] - s2[a]);
}
