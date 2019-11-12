#include "holberton.h"

/**
  *create_file - Function that creates a file.
  *@filename: Const variable file name.
  *@text_content: Char variable text.
  *Return: 1 or -1.
  */

int create_file(const char *filename, char *text_content)
{
	char arc, acc;

	acc = 0;
	arc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (arc == -1)
		return (-1);
	if (filename == '\0')
		return (-1);
	if (text_content == '\0')
		text_content = "";
	while (*(text_content + acc) != '\0')
	{
		acc++;
	}
	write(arc, text_content, acc);
	close(arc);

	return (1);

}
