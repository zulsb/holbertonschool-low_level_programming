#include "holberton.h"

/**
  *_strcpy - string pointed to by src.
  *@dest: first pointer
  *@src: secoond porinter
  *Return: dest.
  */

char *_strcpy(char *dest, char *src)
{

	size_t i;

	for (i = 0; i != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < src; i++)
		dest[i] = '\0';

	return (dest);

}
