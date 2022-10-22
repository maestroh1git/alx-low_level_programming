#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a linked list
* @head: input list
*
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
