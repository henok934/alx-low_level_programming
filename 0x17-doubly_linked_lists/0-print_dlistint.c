#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - the main function
 * @h: the variable of head
 * Return: always success
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t tek = 0;

	while (h)
	{
		printf("%d\n", h->n);
		tek++;
		h = h->next;
	}
	return (tek);
}
