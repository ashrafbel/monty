#include "monty.h"
/**
 * H_push_f - pushes an element in the stack
 * @SK: the head of the stack.
 * @ll_num: line number
 */
void H_push_f(stack_t **SK, unsigned int ll_num)
{
int V;
stack_t *NNODE;
char *Ar = strtok(NULL, " \t\n");

if (Ar == NULL || !validinteger(Ar))
{
fprintf(stderr, "L%u: usage: push integer\n", ll_num);
exit(EXIT_FAILURE);
}
V = atoi(Ar);
NNODE = malloc(sizeof(stack_t));
if (NNODE == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
NNODE->n = V;
NNODE->next = *SK;
NNODE->prev = NULL;
if (*SK != NULL)
(*SK)->prev = NNODE;
*SK = NNODE;
}
/**
 * validinteger - checks if a string is a valid integer
 * @S: string to check.
 * Return: 1 if valid integer, 0 otherwise.
 */
int validinteger(const char *S)
{
if (*S == '-' || *S == '+')
S++;
while (*S)
{
if (!isdigit(*S))
return (0);
S++;
}
return (1);
}
