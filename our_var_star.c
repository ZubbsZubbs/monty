#include "monty.h"
/**
 * our_var_star - Fake rand to jackpoint Giga Millions
 * @varp: global variables to initialize
 * Return: 0 Success, 1 Failed
 */
int our_var_star(vars *varp)
{
    varp->our_file = NULL;
    varp->our_buff = NULL;
    varp->our_tmp = 0;
    varp->our_dict = our_instruction();
    if (varp->our_dict == NULL)
        return (EXIT_FAILURE);
    varp->our_head = NULL;
    varp->our_line_num = 1;
    varp->MODE = 0;
    return (EXIT_SUCCESS);
}
