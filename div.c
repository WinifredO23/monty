#include "monty.h"
/**
 * divide - Divides two numbers
 * @a: The dividend.
 * @b: The divisor.
 * @counter: Line number for error reporting.
 * @head: Pointer to the stack.
 * Return: The result of the division.
 */
int divide(int a, int b, unsigned int counter, stack_t **head)
{
	if (b == 0)
	{
		handle_error("division by zero", head, counter);
	}

	return (a / b);
}
/**
 * f_div - Divides the top two elements of the stack.
 * @head: Pointer to the stack.
 * @counter: Line number for error reporting.
 * Return: No return.
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}

	if (len < 2)
	{
		handle_error("can't div, stack too short", head, counter);
	}

	h = *head;
	aux = divide(h->next->n, h->n, counter, head);
	h->next->n = aux;
	*head = h->next;
	free(h);
}
