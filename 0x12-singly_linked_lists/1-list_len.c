#include "lists.h"
/**
 * list_len - print function
 * @h: the list
 * Return: nul of nds
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		n++;
	}
	return (n);
}
