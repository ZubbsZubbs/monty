#include "monty.h"

/**
 * our_is_num- Checks if given value is a number
 * @str: Num to validate
 * Return: 0 Success, 1 Failed
 */
int our_is_num(char *str)
{
	int loop;

	for (loop = 0; str[loop]; loop++)
	{
		if (str[loop] < 48 || str[loop] > 57)
			return (1);
	}
	return (0);
}
