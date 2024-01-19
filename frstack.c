#include "monty.h"
/**
 * free_stack - frees a stack.
 * @stack: pointer to the stack.
 */
void frsack(stack_t **stack)
{
stack_t *current = *stack;
stack_t *next;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
stack = NULL;
}
