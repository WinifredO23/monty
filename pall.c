#include "monty.h"

/**
 * pall - Print all values on the stack
 * @head: A pointer to the stack's head
 * @bus: The bus_t structure containing program information
 * @counter: The current line number
 */
void pall(stack_t *head, bus_t bus, int counter)
{
	if (head == NULL)
	{
		return;
	}
	printf("%d\n", head->n);
	pall(head->next, bus, counter);
}
