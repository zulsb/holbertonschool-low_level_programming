#include "variadic_functions.h"

/**
  *sum_them_all - Returns the sum of all its parameters.
  *@n: variable unsigned int.
  *Return: add.
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int o, add;

	add = 0;

	if (n == 0)
	return (0);

	va_start(list, n);

	for (o = 0; o < n; o++)
	{
		add = add + va_arg(list, int);
		va_end(list);
	}
	return (add);
}
