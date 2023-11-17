#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <ctype.h>
#define Buffsize 30

/**
 * struct stack_s - Doubly linked list representation of a stack (or queue)
 * @n: Integer
 * @prev: Points to the previous element of the stack (or queue)
 * @next: Points to the next element of the stack (or queue)
 *
 * Description: Doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - Opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct general_var - golbal variables
 * @our_file: file name
 * @our_buff: Getline buffer
 * @our_tmp: Getline counter
 * @our_dict: instruction dictionary
 * @our_head: pointer to list
 * @our_line_num: Stores file current line
 * @MODE: Program configuration stack or queue
 */
typedef struct general_var
{
	FILE *our_file;
	char *our_buff;
	size_t our_tmp;
	instruction_t *our_dict;
	stack_t *our_head;
	unsigned int our_line_num;
	int MODE;
} vars;


extern vars var;

int our_var_star(vars *varp);
instruction_t *our_instruction();
int our_funct_call(vars *var, char *the_opcode);
void our_free_funct(void);
int our_is_num(char *str);

void pall(stack_t **top, unsigned int line_no);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **top, unsigned int line_no);
void pop(stack_t **stack, unsigned int line_number);

void swap(stack_t **top, unsigned int line_no);
void add(stack_t **top, unsigned int line_no);
void f_nop(stack_t **top, unsigned int line_no);
void sub(stack_t **top, unsigned int line_no);
void divi(stack_t **top, unsigned int line_no);


#endif
