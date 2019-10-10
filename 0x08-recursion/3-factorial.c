#include "holberton.h"

/**
  *factorial - Returns the factorial of a given number.
  *@n: variable
  *Return: 1 or -1
  *
  */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));

}
