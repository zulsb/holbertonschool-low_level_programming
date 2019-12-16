#include "lists.h"

/**
  *insert_dnodeint_at_index - Inserts a new node at a given position.
  *@h: Double pointer variable type listint_t.
  *@idx: Position the nodes.
  *@n: Variable new element.
  *Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ct = 0;
	dlistint_t *nn;

	nn = malloc(sizeof(dlistint_t));
	if (nn == '\0')
		return ('\0');
	if (idx == 0)
	{
		(*nn).next = *h;
		(*nn).prev = NULL;
		*h = nn;
			return (nn);
	}
	for (; ct < (idx - 1); ct++)
	{
		nn = (*nn).next;
		if (*h == '\0')
			return (NULL);
	}
	(*nn).n = n;
	(*nn).prev = *h;
	(*nn).next = (*h).next;
	(*h).next = nn;
	return (nn);


}
