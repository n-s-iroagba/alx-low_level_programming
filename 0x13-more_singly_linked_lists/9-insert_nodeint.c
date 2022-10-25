#include "lists.h"
/**
 *insert_nodeint_at_index - function
 *@head: listint_t params
 *@n: int params
 *@idx:unsigned int params
 *Return: listint_t struct
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
    unsigned int count = 0;
	new = malloc(sizeof(listint_t));

	new->n = n;

	if (*head == NULL)
		{
			return (NULL);
		}
	temp = *head;
	
	while (temp != NULL)
		{
			count++;
			if (count == idx)
				{
					new->next = temp->next;
					temp->next = new;
					break;
				}

		}
	return (new);

}
