#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
  *main - Multiplication
  *@argc: number of command line arguments
  *@argv: array
  *Return: 0 or 1.
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i\n", atoi(argv[2]) * atoi(argv[1]));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
