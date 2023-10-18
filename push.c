#include "monty.h"
/**
 * _push - Add a node to the stack
 * @head: Stack head
 * @counter: Line number
 */
void _push(stack_t **head, unsigned int counter)
{
	int n;

	if (!bus.arg || !is_integer(bus.arg))
	{
		handle_error("L%d: usage: push integer", head, counter);
	}

	n = atoi(bus.arg);

	if (bus.lifi == 0)
	{
		addnode(head, n);
	}
	else
	{
		addqueue(head, n);
	}
}
/**
 * is_integer - Check if a string is a valid integer
 * @str: String to check
 * Return: 1 if it's a valid integer, 0 otherwise
 */
int is_integer(char *str)
{
	int i = 0;

	if (str[0] == '-')
	{
		if (str[1] == '\0')
			return (0);

		i = 1;
	}

	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}
/**
 * handle_error - Handle errors
 * @message: Error message format
 * @head: Stack head
 * @counter: Line number
 */
void handle_error(const char *message, stack_t **head, unsigned int counter)
{
	fprintf(stderr, message, counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}

