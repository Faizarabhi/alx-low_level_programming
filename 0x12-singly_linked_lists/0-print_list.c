#include "lists.h"
/**
 * print_list - print function
 * @h: the list
 * Return: nul of nds
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%u] (nil)\n", ptr->len);
		else
		{
		printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		n++;
	}
	return (n);
}
