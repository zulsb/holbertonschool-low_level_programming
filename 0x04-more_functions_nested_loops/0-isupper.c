#include "holberton.h"

/**
 * _isupper - Print alphabet A to Z uppercase
 *@c: is a parameter.
 * Return: 1 if c is uppercase and return 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
