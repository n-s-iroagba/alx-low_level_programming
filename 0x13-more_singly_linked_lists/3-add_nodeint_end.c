#include "lists.h"
/**
*add_nodeint_end - function
*@head: pointer to struct pointer params
*@n: int params
*Return: list_t struct
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *endNode = malloc(sizeof(listint_t));
endNode->n = n;
temp = *head;

if (*head == NULL)
{
*head = endNode;
return (endNode);
}

while (temp->next != NULL)
{
temp = temp->next;
}

temp->next = endNode;
return (endNode);
}
