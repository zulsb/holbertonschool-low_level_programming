#include "holberton.h"

/**
 * _islower - checks for lowercase and uppercase character
 *@c: iam parameter.
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
