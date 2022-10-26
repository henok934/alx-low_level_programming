#include "lists.h"
/**
* sum_listint - main function of the linkedlist
* @head: variable of the function
* Return: always success
*/


int sum_listint(listint_t *head)
{
	listint_t *tek = head;
	int sum = 0;

	while (tek)
	{
	sum += tek->n;
	tek = tek->next;
	}

	return (sum);
}
