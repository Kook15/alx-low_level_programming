#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: ....
 * Return: ...
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h == 1)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	return (count);
}
