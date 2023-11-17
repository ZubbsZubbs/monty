#include "monty.h"

/**
 * divi - divide the top two elements of the stack
 * @top: Double linked list
 * @line_no: File line counter
 */
void divi(stack_t **top, unsigned int line_no)
{
	if (!*top || !(*top)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n",
			line_no);
		our_free_funct();
		exit(EXIT_FAILURE);
	}
	if ((*top)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_no);
		our_free_funct();
		exit(EXIT_FAILURE);
	}
	(*top)->next->n = (*top)->next->n / (*top)->n;
	pop(top, line_no);
}
