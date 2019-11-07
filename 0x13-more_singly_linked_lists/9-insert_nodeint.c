#include "lists.h"
/**
  *insert_nodeint_at_index - Inserts a new node at a given position.
  *@head: Double pointer variable type listint_t.
  *@idx: position the nodes.
  *@n: varible new element.
  *Return: nn.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ct = 0;
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	if (nn == '\0')
		return ('\0');
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
			return (nn);
	}
	for (; ct < (idx - 1); ct++)
	{
		nn = (*nn).next;
		if (*head == '\0')
			return ('\0');
	}
	nn->n = n;
	nn->next = head->next;
	head->next = nn;
	return (nn);

}
