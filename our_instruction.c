#include "monty.h"

/**
 * our_instruction - creates new functions dictionary
 * Return: dictionary pointer
 */
instruction_t *our_instruction()
{
	instruction_t *pointer = malloc(sizeof(instruction_t) * 18);

	if (!pointer)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}
	pointer[0].opcode = "pall", pointer[0].f = pall;
	pointer[1].opcode = "push", pointer[1].f = push;
	pointer[2].opcode = "pint", pointer[2].f = pint;
	pointer[4].opcode = "swap", pointer[4].f = swap;
	pointer[5].opcode = "add", pointer[5].f = add;
	pointer[6].opcode = "nop", pointer[6].f = NULL;
	pointer[7].opcode = "sub", pointer[7].f = sub;
	pointer[8].opcode = "div", pointer[8].f = divi;
	
	
	pointer[17].opcode = NULL, pointer[17].f = NULL;

	return (pointer);
}
