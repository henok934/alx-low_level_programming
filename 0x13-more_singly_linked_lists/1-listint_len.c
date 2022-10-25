#include "lists.h"

#include <stdio.h>

/**
* listint_len - the function used to retrivenu of elements on linked list
* @h: used for retrive number
* Return: the number
*/

size_t listint_len(const listint_t *h)
{
	size_t tt = 0;

	while (h)
	{
	tt++;
	h = h->next;
	}
	return (tt);
}
