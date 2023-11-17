#include "monty.h"
/**
 * pint - Print last node
 * @top: Double linked list
 * @line_no: File line execution
 */
void pint(stack_t **top, unsigned int line_no)
{
    if (!*top)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line_no);
        our_free_funct();
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*top)->n);
}
