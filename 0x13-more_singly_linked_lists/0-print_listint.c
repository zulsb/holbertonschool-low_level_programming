#include "lists.h"
/**
 * print_listint - Returns the number of elements in a linked listint_t.
 * @h: Pointer variable const.
 * Return: elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t rec;

	rec = 0;

	while (h != '\0')
	{
		printf("%i\n", h->n);
		h = (*h).next;
		rec++;
	}
	return (rec);

}
