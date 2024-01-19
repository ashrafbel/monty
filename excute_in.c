#include "monty.h"

void executinstruction(char *o_p, stack_t **SK, unsigned int ll_num)
{
instruction_t instructions[] = {
{"push", H_push_f},
{"pall", h_pall_fun},
{NULL, NULL}
};

int I = 0;

while (instructions[I].opcode != NULL)
{
if (strcmp(instructions[I].opcode, o_p) == 0)
{
 instructions[I].f(SK, ll_num);
return;
}
I++;
}

fprintf(stderr, "L%u: unknown instruction %s\n", ll_num, o_p);
exit(EXIT_FAILURE);
}

