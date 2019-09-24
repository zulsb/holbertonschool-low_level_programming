#include "holberton.h"

/**
  * _islower - checks for lowercase character
  *@c: iam parameter.
  * Return: Always 0 (Success)
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

