#include "holberton.h"

/**
 * print_last_digit - Last digit of a number.
 * @n: Parameter
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int r;

	r = abs(n % 10);
	_putchar('0' + r);

	return (r);
}
