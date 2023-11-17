#include "monty.h"

/**
 * our_free-funct - Clean all program mallocs
 * Return: None
 */
void our_free_funct(void)
{
	if (var.our_buff != NULL)
		free(var.our_buff);
	if (var.our_file != NULL)
		fclose(var.our_file);
	free(var.our_dict);
	if (var.our_head != NULL)
	{
		while (var.our_head->next != NULL)
		{
			var.our_head = var.our_head->next;
			free(var.our_head->prev);
		}
		free(var.our_head);
	}
}
