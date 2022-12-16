#ifndef __HOOLB__
#define __HOOLB__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_num);
} instruction_t;

void pint(stack_t **stack, unsigned int line_num);
void free_stack(stack_t *head);
int pushint(char *list, int ln);
int _strcmp(char *opcode, char *list);
void add(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_num);
void pop(stack_t **stack, unsigned int line_num);
void push(stack_t **stack, unsigned int line_number, int n);
void pall(stack_t **stack, unsigned int line_num);
void execute(char *string[], stack_t *stack);
int nlfind(char *list);
void free_list(char *a[]);
int combfind(char *list, int ln);


#endif