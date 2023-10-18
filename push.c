#include "monty.h"

/**
 * push - Add an integer to the stack
 * @head: A pointer to the stack's head
 * @bus: The bus_t structure containing program information
 * @counter: The current line number
 *
 * Description:
 *	- Checks if the number of arguments is correct.
 *	- Converts the argument to an integer.
 *	- Adds the integer to the stack.
 */
void push(stack_t **head, bus_t bus, int counter) 
{
	int n;

	if (bus.arg == NULL) 
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	n = atoi(bus.arg);
	addnode(head, n);
}

