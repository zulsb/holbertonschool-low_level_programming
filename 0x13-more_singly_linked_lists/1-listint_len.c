#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked listint_t.
 * @h: Pointer variable const.
 * Return: Elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t rec;

	rec = 0;

	while (h != '\0')
	{
		h = (*h).next;
		rec++;
	}
	return (rec);
}
