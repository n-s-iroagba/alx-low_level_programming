#include "lists.h"
 
/**
*listint_len - function
*@h: listint_t params
*Return: number of nodes
*/
 
 size_t listint_len(const listint_t *h)
 {
	 size_t count = 0;
	 listint_t *node;

	 if (h != NULL)
		 {
			 count++;

		 }

			 
	 node = h->next;
	

	 for(; node != NULL; node = node->next)
		 {
			 count++;

         }   
     return (count);
     
 }
