#include <stdio.h>

/**
  *main - Numbers of arguments
  *@argc: number of command line arguments
  *@argv: array
  *Return: 0.
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);

}
