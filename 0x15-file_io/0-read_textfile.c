#include "holberton.h"

/**
  *read_textfile - Function that creates a file.
  *@filename: Const variable file name.
  *@letters: Char variable text letters.
  *Return: r.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *storage;
	int arc, r, wte;

	if (filename == '\0')
	{
		return (0);
	}
	arc = open(filename, O_RDONLY);
	if (arc == '\0')
	{
		return (0);
	}
	storage = malloc(sizeof(char) * letters);
	if (storage == '\0')
	{
		return (0);
	}
	r = read(arc, storage, letters);
	if (r < 0)
	{
		close(arc);
		return (0);
	}
	wte = write(STDOUT_FILENO, storage, r);
	if (wte < 0)
	{
		close(arc);
		free(storage);
		return (0);
	}

	close(arc);
	free(storage);
	return (r);
}
