#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of list
* @h: A pointer to the head of the list.
*
* Return: Returns the number of nodes.
*/

size_t print_listint(const listint_t *h)
{

	size_t tt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		tt++;
		h = h->next;
	}

	return (tt);
}
