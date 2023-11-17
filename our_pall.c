#include "monty.h"
/**
 * pall - Print list
 * @top: Double linked list
 * @line_no: File line execution
 */
void pall(stack_t **top, unsigned int line_no)
{
    stack_t *tmp_val = *top;
    (void) line_no;
    if (!tmp_val)
        return;
    while (tmp_val)
    {
        printf("%d\n", tmp_val->n);
        tmp_val = tmp_val->next;
    }
}
