#include "lists.h"

/**
 *pop_listint - function
 *@head : listint_t params
 *Return: int value
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;
	if (*head == NULL)
		{
			return (0);
		}
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);

}
