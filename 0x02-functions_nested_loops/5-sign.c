#include "holberton.h"

/**
 * print_sign - Print sing numer
 *@n: Iam a parameter.
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	_putchar ('+');
	return (1);
	else if (n == 0)
	_putchar ('0');
	return (0);
	else
	putchar ('-');
	return (-1);
}
