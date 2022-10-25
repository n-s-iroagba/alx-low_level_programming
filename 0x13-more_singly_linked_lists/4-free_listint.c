#include "lists.h"
/**
 *free_listint - function
 *@head : listint_params
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	temp = head;
	while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}

}
