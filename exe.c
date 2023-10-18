#include "monty.h"

/**
 * execute - Executes the opcode
 * @content: Line content
 * @stack: Head linked list - stack
 * @counter: Line counter
 * @file: Pointer to monty file
 * Return: 0 on success, 1 on failure
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", _push}, {"pall", f_pall}, {"pint", f_pint},
		{"pop", f_pop}, {"swap", f_swap}, {"add", f_add},
		{"nop", f_nop}, {"sub", f_sub}, {"div", f_div},
		{"mul", f_mul}, {"mod", f_mod}, {"pchar", f_pchar},
		{"pstr", f_pstr}, {"rotl", f_rotl}, {"rotr", f_rotr},
		{"queue", f_queue}, {"stack", f_stack},
		{NULL, NULL}
	};

	char *op = strtok(content, " \n\t");
	unsigned int i;

	if (op && op[0] == '#')
		return (0);

	bus.arg = strtok(NULL, " \n\t");

	for (i = 0; opst[i].opcode; i++)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return (0);
		}
	}

	if (op && !opst[i].opcode)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	return (1);
}

