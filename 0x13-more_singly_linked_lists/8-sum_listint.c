#include "lists.h"
/**
  *sum_listint - Sum of all the data (n) of a listint_t linked list.
  *@head: pointer variable type listint_t.
  *Return: sum.
  */
int sum_listint(listint_t *head)
{
	int s;

	s = 0;

	while (head != '\0')
	{
		s += (*head).n;
		head = (*head).next;
	}

	return (s);
}
