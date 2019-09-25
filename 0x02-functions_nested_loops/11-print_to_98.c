#include <stdio.h>
#include "holberton.h"

/**
  * print_to_98 - All natural numbers from n to 98..
  *@n: Parameter
  * Return: Always 0 (Success)
  */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{

		for (x = n; x >= 98; x--)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("%d", x);
		}
	}
	else
	{

		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("%d", x);
		}
	}
	printf("\n");

}
