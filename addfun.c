#include "monty.h"

/**
 * FUNadd - Adds the top two elements of the stack.
 * @SK: to the stack.
 * @ll_num: Line number
 */
void FUNadd(stack_t **SK, unsigned int ll_num)
{
if (SK == NULL || *SK == NULL || (*SK)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", ll_num);
exit(EXIT_FAILURE);
}
(*SK)->next->n += (*SK)->n;
h_pop_fun(SK, ll_num);
}
