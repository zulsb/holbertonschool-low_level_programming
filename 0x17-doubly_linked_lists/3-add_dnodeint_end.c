#include "lists.h"

/**
  *add_dnodeint_end - Adds a new node at the end of a lists.
  *@head: Double pointer
  *@n: Variable const
  *Return: Address new element, or NULL if it failed.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *rec, *saf;

	saf = *head;

	rec = malloc(sizeof(dlistint_t));
	if (rec == NULL)
		return (NULL);

	(*rec).n = n;
	(*rec).next = NULL;

	if (*head == NULL)
	{
		(*rec).prev = NULL;
		*head = rec;
		return (rec);
	}
	else
	{
		while ((*saf).next)
			saf = (*saf).next;
		(*saf).next = rec;
		(*rec).prev = saf;
	}

	return (rec);
}
