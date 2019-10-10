#include "holberton.h"

/**
  *_sqrt_recursion - Returns the natural square root of a number.
  *@n: variable.
  *Return: if n, is not have a natural.
  */

int _sqrt_recursion(int n)
{
	return (square(n, 0));
}

/**
  *square - Returns the natural square root of a number.
  *@n: variable
  *@x: variable.
  *Return: 0, 1, x or -1.
  */

int square(int n, int x)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);

	return (square(n, x + 1));

}
