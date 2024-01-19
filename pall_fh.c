#include "monty.h"
/**
 * h_pall_fun - Print the elements of the stack
 * @SK: head linked list - stack
 * @ll_num: line number
*/

void h_pall_fun(stack_t **SK, unsigned int ll_num)
{
stack_t *CURENT;
(void)ll_num;

CURENT = *SK;
while (CURENT != NULL)
{
printf("%d\n", CURENT->n);
CURENT = CURENT->next;
}
}

