#include "lists.h"
/**
 * add_node - print function
 * @head: the list
 * @str: the string wich added
 * Return: nul of nds
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *ptr;

	if (str == NULL)
		len = 0;
	while (str[len] != '\0')
		len++;
	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
