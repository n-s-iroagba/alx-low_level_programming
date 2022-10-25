#include "lists.h"

/**
 *print_listint - function
 *@h: listint params
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *node;

	printf("%i\n", h->n);

	node = h->next;
	count++;

	for(; node != NULL; node = node->next)
		{
			printf("%i\n", node->n);
			count++;


		}	
	return (count);
	
}
