#include "monty.h"
/**
 * f_mul - Multiplies the top two elements.
 * @head: Pointer.
 * @counter: Line number for error reporting.
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *top, *second_top;
	int result;

	if (!*head || !(*head)->next)
	{
		handle_error("can't mul, stack too short", head, counter);
	}

	top = *head;
	second_top = top->next;

	result = second_top->n * top->n;
	second_top->n = result;
	*head = second_top;
	free(top);
}

