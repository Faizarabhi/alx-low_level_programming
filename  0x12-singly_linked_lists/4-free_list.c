#include "lists.h"
/**
 * free_list - function free list_t
 * @head: the list wich be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
		temp = head;
	}
}
