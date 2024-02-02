#include "lists.h"
/**
 * add_node_end - print function
 * @head: the list
 * @str: the string wich added
 * Return: nul of nds
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *b, *temp;

	if (str == NULL)
		len = 0;
	while (str[len] != '\0')
		len++;
	b = (list_t *)malloc(sizeof(list_t));
	if (b == NULL)
		return (NULL);
	b->str = strdup(str);
	b->len = len;
	b->next = NULL;
	if (*head == NULL)
		*head = b;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = b;
	}
	return (*head);
}
