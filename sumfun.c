#include "monty.h"
/**
 * FSUM - Adds the top two elements of the stack.
 * @SK: Pointer to a pointer pointing to the top node of the stack.
 * @line_number: Integer representing the line number of the opcode.
 */
void FSUM(stack_t **SK, unsigned int line_number)
{
int sum;
if (SK == NULL || *SK == NULL || (*SK)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
(*SK) = (*SK)->next;
sum = (*SK)->n + (*SK)->prev->n;
(*SK)->n = sum;
free((*SK)->prev);
(*SK)->prev = NULL;
fprintf(stdout, "Result of addition: %d\n", sum);
}

