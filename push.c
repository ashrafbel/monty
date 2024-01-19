#include "monty.h"
void H_push_f(stack_t **stack, unsigned int line_number)
{
    char *arg = strtok(NULL, " \t\n"); 

    int value;
    stack_t *new_node;

    if (arg == NULL || !validinteger(arg))
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = atoi(arg);
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->n = value;
    new_node->next = *stack;
    new_node->prev = NULL;
    if (*stack != NULL)
        (*stack)->prev = new_node;
    *stack = new_node;
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
return 0;
S++;
}
return (1);
}
