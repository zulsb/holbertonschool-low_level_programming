#include "variadic_functions.h"

/**
  *sum_them_all - Returns the sum of all its parameters.
  *@n: variable unsigned int.
  *Return: add.
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	unsigned int o, ad;

	ad = 0;

	if (n == 0)
	return (0);

	va_start(li, n);

	for (o = 0; o < n; o++)
	{
		ad = ad + va_arg(li, int);
		va_end(li);
	}
	return (ad);
}
