#include "lists.h"

/**
  *print_list - Function print lists.
  *@h: pointer variable constant type list_t.
  *Return: The numers of nodes.
  */

size_t print_list(const list_t *h)
{
	size_t rec;

	rec = 0;

	while (h != '\0')
	{
		if (h->str != '\0')
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		rec++;
	}
	return (rec);
}
