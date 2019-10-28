#include "variadic_functions.h"

/**
  *print_all - Print all.
  *@format: const.
  *
  */

void print_all(const char * const format, ...)
{
	char *po;
	va_list li;
	unsigned int pr, o;

	o = 0;
	while (format)
	{
		va_start(li, format);
		while (format[o])
		{
			pr = 1;
			switch (format[o])
			{
				case 'c':
				printf("%c", va_arg(li, int));
				break;
				case 'i':
				printf("%d", va_arg(li, int));
				break;
				case 'f':
				printf("%f", va_arg(li, double));
				break;
				case 's':
				po = va_arg(li, char *);
				if (po != '\0')
				po = "(nil)";
				printf("%s", po);
				break;
				default:
				pr = 0;
				break;
			}
		if (format[o + 1] && pr)
		printf(", ");
		o++;
		}
	va_end(li);
	break;
	}
	printf("\n");
}
