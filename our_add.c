#include "monty.h"

/**
 * add - add the top two elements of the stack
 * @top: Double linked list
 * @line_no: File line execution
 */
void add(stack_t **top, unsigned int line_no)
{
	if (!*top || !(*top)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n",
			line_no);
		our_free_funct();
		exit(EXIT_FAILURE);
	}
	(*top)->next->n = (*top)->next->n + (*top)->n;
	pop(top, line_no);
}
