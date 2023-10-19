#include "monty.h"
/**
 * f_mod - Computes the rest of the division of the second top element
 *         of the stack by the top element of the stack.
 * @head: Pointer to the stack
 * @counter: Line number for error reporting
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;
	int len = 0, aux;

	while (h)
	{
		h = h->next;
		len++;
	}

	if (len < 2)
	{
		handle_error("can't mod, stack too short", head, counter);
	}

	h = *head;
	if (h->n == 0)
	{
		handle_error("division by zero", head, counter);
	}

	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
