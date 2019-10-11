#include "holberton.h"

int dromo(char *s);
int pali(char *s, int ps_first, int ps_last);

/**
  *is_palindrome - Funtion about palindrome.
  *@s: pointer.
  *Return: position first and position last.
  *
  */
int is_palindrome(char *s)
{
	int ps_first, ps_last;

	ps_first = 0;
	ps_last = dromo(s);

	return (pali(s, ps_first, ps_last - 1));
}

/**
  *dromo - Funtion about palindrome.
  *@s: pointer.
  *Return: length.
  *
  */
int dromo(char *s)
{
	if (*s == '\0')
		return ('\0');
	return (dromo(s + 1) + 1);

}

/**
  *pali - Funtion about palindrome.
  *@ps_first: variable position firts.
  *@ps_last: variable position last.
  *@s: pointer.
  *Return: 0 or 1..
  */

int pali(char *s, int ps_first, int ps_last)
{
	if (ps_first < ps_last)
	{
		if (s[ps_first] == s[ps_last])
		{
			return (pali(s, ps_first + 1, ps_last - 1));
		}
		else
			return (0);
	}
	else
		return (1);
}
