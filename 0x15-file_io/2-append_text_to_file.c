#include "holberton.h"

/**
  *append_text_to_file - Function that appends text at the end of a file.
  *@filename: Const variable file name.
  *@text_content: Char variable text.
  *Return: 1 or -1
  */

int append_text_to_file(const char *filename, char *text_content)
{
	char arc, acc;

	acc = 0;
	arc = open(filename, O_WRONLY | O_APPEND);

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
