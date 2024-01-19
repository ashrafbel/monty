#include "monty.h"
/**
 * main - entry point of the program
 * @argc: argument
 * @argv: argument
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
stack_t *SK = NULL;
FILE *f;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
f = openf(argv[1]);
readfileexu(f, &SK);
fclose(f);
frsack(&SK);
return (0);
}

