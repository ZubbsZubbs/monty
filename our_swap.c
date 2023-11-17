#include "monty.h"
/**
 * swap - Delete top of list
 * @top: Double linked list
 * @line_no: File line execution
 */
void swap(stack_t **top, unsigned int line_no)
{
    int tmp_val;
    if (!*top || !(*top)->next)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n",
            line_no);
        our_free_funct();
        exit(EXIT_FAILURE);
    }
    tmp_val = (*top)->n;
    (*top)->n = (*top)->next->n;
    (*top)->next->n = tmp_val;
}
