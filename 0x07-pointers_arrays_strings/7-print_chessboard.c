#include "holberton.h"

/**
  *print_chessboard - Prints the chessboard.
  *@a: pointer.
  *Return: 0..
  */

void print_chessboard(char (*a)[8])
{

	int o, s;

	for (o = 0; o < 8; o++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[o][s]);
		}

	_putchar ('\n');
	}
}
