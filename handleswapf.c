#include "monty.h"
/**
 * swap - two top elemnt in sk swaped
 * @SK: to the stack
 * @ll_num: Line number
 */
void H_swap_FUN(stack_t **SK, unsigned int ll_num)
{
int temp;
if (SK == NULL || *SK == NULL || (*SK)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", ll_num);
exit(EXIT_FAILURE);
}
temp = (*SK)->n;
(*SK)->n = (*SK)->next->n;
(*SK)->next->n = temp;
}

