#include "monty.h"
/**
 * f_sub - Subtracts the top element from the second top element of the stack.
 * @head: Pointer to the stack.
 * @counter: Line number for error reporting.
 * Return: No return.
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *top, *second_top;
	int result;

	if (!*head || !(*head)->next)
	{
		handle_error("can't sub, stack too short", head, counter);
	}

	top = *head;
	second_top = top->next;
	result = second_top->n - top->n;
	second_top->n = result;
	*head = second_top;
	free(top);
}
