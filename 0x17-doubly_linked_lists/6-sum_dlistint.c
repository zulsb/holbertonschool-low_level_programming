#include "lists.h"

/**
  *sum_dlistint - Sum of all the n in dlistint_t list.
  *@head: The head of list.
  *Return: 0 if the list is empty..
 */

int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	while (head != '\0')
	{
		s = s + (*head).n;
		head = (*head).next;
	}
	return (s);
}
