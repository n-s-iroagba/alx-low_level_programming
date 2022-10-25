#include "lists.h"

/**
 *get_nodeint_at_index - function
 *@head: listint_t params
 *@index: int params
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = -1;
	listint_t *data;
	listint_t *temp;
    if (head == NULL)
		{
			return (0);
		}
	temp = head;
	while (temp != NULL)
		{
			count++;

			if (count == index)
				{
	         		data = temp;
					break;
				}
			temp = temp->next;
		}
	if (data)
		{
			return (data);
		}
	else
		{
			return (0);
		}

}
