#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Pointer to the stack.
 * @counter: Line number for error reporting.
 * Return: No return.
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *top, *second_top;
	int aux;

	if (!*head || !(*head)->next)
	{
		handle_error("can't swap, stack too short", head, counter);
	}

	top = *head;
	second_top = top->next;

	aux = top->n;
	top->n = second_top->n;
	second_top->n = aux;
}

