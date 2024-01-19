#include "monty.h"
/**
 * h_pop_fun - delet the top element
 * @SK: the stack.
 * @ll_num: Line number in the Monty file.
 */
void h_pop_fun(stack_t **SK, unsigned int ll_num)
{
stack_t *Tp;
if (SK == NULL || *SK == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", ll_num);
exit(EXIT_FAILURE);
}
Tp = *SK;
*SK = (*SK)->next;
free(Tp);
}
