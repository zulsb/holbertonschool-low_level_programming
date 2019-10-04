#include "holberton.h"
/**
 * rot13 - Encodes a string using rot13.
 * @s1: pointer
 * Return: string cocatenated
 */
char *rot13(char *s1)
{
	int a, x;
	char s2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s3[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	x = 0;

	while (s1[a] != '\0')
	{
		x = 0;

		while (s2[x] != '\0')
		{
			if (s1[a] == s2[x])
			{
				s1[a] = s3[x];
			break;
			}
				x++;
			}
			a++;
		}

	return (s1);
}
