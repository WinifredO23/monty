#include "monty.h"
/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a new line.
 * @head: Stack head.
 * @counter: Line number.
 * Return: No return.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h = *head;
	(void)counter;

	for (; h && h->n > 0 && h->n <= 127; h = h->next)
	{
		printf("%c", h->n);
	}

	printf("\n");
}
