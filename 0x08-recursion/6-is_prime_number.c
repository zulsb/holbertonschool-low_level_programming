#include "holberton.h"

/**
  *is_prime_number - Print prime number.
  *@n: varible.
  *Return: 1 or 0.
  */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
  *prime - Print prime number
  *@n: variable
  *@x: variable.
  *Return: 1 or 0.
  */

int prime(int n, int x)
{

	if (n % x == 0 || n < 2)
		return (0);
	else if (x > n / 2)
		return (1);

	return (prime(n, x + 1));

}
