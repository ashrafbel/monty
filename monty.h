#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


FILE *openf(char *Fname);
void readfileexu(FILE *f, stack_t **sk);
void H_push_f(stack_t **stack, unsigned int line_number);
void h_pall_fun(stack_t **stack, unsigned int line_number);
int validinteger(const char *S);
void executinstruction(char *o_p, stack_t **SK, unsigned int ll_num);
void frsack(stack_t **stack);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void h_pint_f(stack_t **SK, unsigned int ll_num);
void h_pop_fun(stack_t **SK, unsigned int ll_num);
void H_swap_FUN(stack_t **SK, unsigned int ll_num);
void FUNadd(stack_t **SK, unsigned int ll_num);






#endif

