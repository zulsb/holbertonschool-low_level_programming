#include "variadic_functions.h"

/**
  *print_strings - Print strings.
  *@n: variable unsigned int.
  *@separator: pointer.
  *Return: li.
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list li;
	unsigned int o;

	va_start(li, n);
	for (o = 0; o < n; o++)
	{
		s = va_arg(li, char *);
		if (s == '\0')
			printf("(nil)");
		else
			printf("%s", s);

		if (o < (n - 1) && separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
