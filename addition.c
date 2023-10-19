#include "monty.h"
/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the stack.
 * @counter: Line number for error reporting.
 * Return: No return.
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (!h || !(h->next))
	{
		handle_error("can't add, stack too short", head, counter);
	}

	h->next->n += h->n;
	*head = h->next;
	free(h);
}
