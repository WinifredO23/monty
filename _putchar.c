#include "monty.h"
/**
 * f_pchar - Prints the char at the top of the stack, followed by a new line.
 * @head: Pointer to the stack.
 * @counter: Line number for error reporting.
 * Return: No return.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;

	if (!h)
	{
		handle_error("can't pchar, stack empty", head, counter);
	}

	if (!isprint(h->n))
	{
		handle_error("can't pchar, value out of range", head, counter);
	}

	printf("%c\n", h->n);
}
