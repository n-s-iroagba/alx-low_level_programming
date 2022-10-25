#include "lists.h"

/**
 *reverse_listint - function
 *@head: listint_t params
 *Return: listint_t reversed head
 */

listint_t *reverse_listnt(listint_t **head)
{
	listint_t *prev, *curr;

	if (*head != NULL)
		{
			prev = *head;
			*head = (*head)->next;
			prev->next = NULL;
			curr = *head;
		}
	else
		{
			return (NULL);
		}
	while (*head != NULL)
		{
			*head = (*head)->next;
			curr->next = prev;
			prev = curr;
			curr = *head;
		}
	*head = prev;

	return (*head);
	
}
