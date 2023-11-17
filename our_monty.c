#define _GNU_SOURCE
#include "monty.h"

vars var;

/**
 * main - entry point of LIFO, FILO program
 * @argc: count of arguments
 * @argv: Pointer containing arguments
 * Return: 0 Success, 1 Failed
 */
int main(int argc, char **argv)
{
	char *the_opcode;

	if (argc < 2 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	if (our_var_star(&var) != 0)
		return (EXIT_FAILURE);

	var.our_file = fopen(argv[1], "r");
	if (!var.our_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		our_free_funct();
		return (EXIT_FAILURE);
	}

	while (getline(&var.our_buff, &var.our_tmp, var.our_file) != -1)
	{
		the_opcode = strtok(var.our_buff, " \r\t\n");
		if (the_opcode != NULL)
			if (our_funct_call(&var, the_opcode) == EXIT_FAILURE)
			{
				our_free_funct();
				return (EXIT_FAILURE);
			}
		var.our_line_num++;
	}

	our_free_funct();

	return (EXIT_SUCCESS);
}
