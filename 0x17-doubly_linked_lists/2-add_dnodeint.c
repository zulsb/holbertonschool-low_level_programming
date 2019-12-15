#include "lists.h"

/**
  *add_dnodeint - Adds a new node at the end of a lists.
  *@head: Double pointer.
  *@n: Variable const.
  *Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *rec;

	rec = malloc(sizeof(dlistint_t));
	if (rec == NULL)
		return (NULL);

	(*rec).n = n;
	(*rec).next = *head;
	(*rec).prev = NULL;
	if (*head != NULL)
		(*head)->prev = rec;
	*head = rec;
	return (rec);

}

