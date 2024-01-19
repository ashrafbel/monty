#include "monty.h"
/**
 * h_pint_f - Prints  the top of the stack
 * @SK: Tthe stack data structure
 * @ll_num: The line number
 */
void h_pint_f(stack_t **SK, unsigned int ll_num)
{
if (SK == NULL || *SK == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", ll_num);
exit(EXIT_FAILURE);
}
printf("%d\n", (*SK)->n);
}
