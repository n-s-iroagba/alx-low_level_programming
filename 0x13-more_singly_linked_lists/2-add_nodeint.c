#include "lists.h"
/**
 *add_nodeint - function
 *@h: listint_t params
 *@n: int params
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);

}
