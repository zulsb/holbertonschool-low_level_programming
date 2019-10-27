#include "variadic_functions.h"

/**
  *print_numbers - Print the numbers.
  *@n: variable unsigned int.
  *@separator: pointer.
  *Return: li.
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int s;
	va_list li;
	unsigned int o;

	va_start(li, n);
	for (o = 0; o < n; o++)
	{
		s = va_arg(li, int);
		printf("%i", s);

		if (o < (n - 1) && separator)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(li);
}
