#include "monty.h"

/**
 * our_funct_call - call various functions
 * @var: Global variables
 * @the_opcode: the exact command to execute
 * Return: None
 */
int our_funct_call(vars *var, char *the_opcode)
{
	int loop;
    
	for (loop = 0; var->our_dict[loop].opcode; loop++)
		if (strcmp(the_opcode, var->our_dict[loop].opcode) == 0)
		{
			if (!var->our_dict[loop].f)
				return (EXIT_SUCCESS);
			var->our_dict[loop].f(&var->our_head, var->our_line_num);
			return (EXIT_SUCCESS);
		}
	if (strlen(the_opcode) != 0 && the_opcode[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n",
			var->our_line_num, the_opcode);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
