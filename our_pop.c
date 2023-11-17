#include "monty.h"
/**
* pop - Delete top of list
* @top: Double linked list
* @line_no: File line execution
*/
void pop(stack_t **top, unsigned int line_no)
{
    stack_t *tmp_val;
    if (!*top)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_no);
        our_free_funct();
        exit(EXIT_FAILURE);
    }
    tmp_val = *top;
    *top = tmp_val->next;
    if (tmp_val->next)
        tmp_val->next->prev = NULL;
    free(tmp_val);
}
