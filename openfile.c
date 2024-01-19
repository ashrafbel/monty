#include "monty.h"
/**
 * open_file - opens a file in read mode.
 * @Fname: the name of file
 *
 * Return: pointer to the opened file or exist        
 */
FILE *openf(char *Fname)
{
FILE *F;

F = fopen(Fname, "r");
if (F == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", Fname);
exit(EXIT_FAILURE);
}
return F;
}

