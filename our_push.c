#include "monty.h"
/**
 * push - Insert a new value in list
 * @top: Double linked list
 * @line_no: File line execution
 */
void push(stack_t **top, unsigned int line_no)
{
    stack_t *tmp_val = NULL, *tmp = *top;
    char *no;
    no = strtok(NULL, " \r\t\n");
    if (no == NULL || (our_is_num(no) != 0 && no[0] != '-'))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_no);
        our_free_funct();
        exit(EXIT_FAILURE);
    }
    tmp_val = malloc(sizeof(stack_t));
    if (!tmp_val)
    {
        fprintf(stderr, "Error: malloc failed\n");
        our_free_funct();
        exit(EXIT_FAILURE);
    }
    tmp_val->n = atoi(no);
    if (var.MODE == 0 || !*top)
    {
        tmp_val->next = *top;
        tmp_val->prev = NULL;
        if (*top)
            (*top)->prev = tmp_val;
        *top = tmp_val;
    }
    else
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = tmp_val;
        tmp_val->prev = tmp;
        tmp_val->next = NULL;
    }
}
