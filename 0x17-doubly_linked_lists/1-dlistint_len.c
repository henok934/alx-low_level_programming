#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - functions of len value
 * @h: variable of the head
 * Return: always success
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t tek = 0;

	while (h)
	{
		h = h->next;
		tek++;
	}
	return (tek);
}
