#include "lists.h"
/**
 * add_nodeint - Returns the number of elements in a linked listint_t.
 * @head: Double pointer variable type listint_t.
 * @n: const variable type int.
 * Return: pointer head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *rec;

	rec = malloc(sizeof(listint_t));
	if (rec == '\0')
	return ('\0');

	(*rec).n = n;
	(*rec).next = *head;
	*head = rec;
	return (*head);

}
