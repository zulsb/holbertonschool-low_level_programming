#include "lists.h"

/**
  *add_node - Function adds a new node at the beginning of a list.
  *@head: Pointer ti pointer variable type list_t.
  *@str: Pointer variable.
  *Return: a.
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *a;

	a = malloc(sizeof(list_t));

	if (a == '\0')
		return ('\0');
	for (; str[l] != '\0'; l++)
	{
	}

	a->str = strdup(str);
	a->len = l;
	a->next = *head;
	*head = a;

	return (a);
}
