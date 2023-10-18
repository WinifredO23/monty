#include "monty.h"
/**
 * free_stack - Frees a doubly linked list
 * @head: Head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *current = head;

	while (current != NULL)
	{
		stack_t *temp = current;

		current = current->next;

		free(temp);
	}
}

