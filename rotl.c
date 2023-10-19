#include "monty.h"
/**
 * f_rotl - Rotates the stack to the top.
 * @head: Pointer to the stack.
 * @counter: Line number (unused).
 * Return: No return.
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *current = *head, *new_head;

	if (!*head || !(*head)->next)
	{
		return;
	}

	for (new_head = current; new_head->next; new_head = new_head->next)
	{
		
	}

	new_head->next = *head;
	(*head)->prev = new_head;
	(*head) = current->next;
	(*head)->prev = NULL;
	current->next = NULL;
}
