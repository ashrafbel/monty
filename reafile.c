#include "monty.h"
/**
 * readfileexu - reads and executes instructions from a file
 * @f: read instruction
 * @sk: data structure stack
 */
void readfileexu(FILE *f, stack_t **sk)
{
char *BUFF = NULL, *o_p;
unsigned int SIZOLINE = 0;
ssize_t r;
size_t l = 0;

while ((r = getline(&BUFF, &l, f)) != -1)
{
SIZOLINE++;
o_p = strtok(BUFF, " \t\n");
if (o_p != NULL && o_p[0] != '#')
{
executinstruction(o_p, sk, SIZOLINE);
}
}
free(BUFF);
}

