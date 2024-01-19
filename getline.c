#include "monty.h"
/**
 * getline - Reads a line from a file stream.
 *
 * @LPTR: Pointer to the buffer storing the line.
 * @n: Pointer to the size of the buffer.
 * @stream: File stream to read from.
 *
 * Return: The number of characters read, or -1 on failure.
 */
ssize_t getline(char **LPTR, size_t *n, FILE *stream)
{
char *temp;
int c;
size_t i = 0;
if (NULL == LPTR || NULL == n || NULL == stream)
{
return (-1);
}
if (NULL == LPTR || 0 == *n)
{
*n = 128;
*LPTR = (char *)malloc(*n);

if (*LPTR == NULL)
{
return (-1);
}
}
while ((c = fgetc(stream)) != EOF && '\n' != c)
{
(*LPTR)[i++] = (char)c;

if (i == *n - 1)
{
*n *= 2;
temp = (char *)realloc(*LPTR, *n);
if (temp == NULL)
{
free(*LPTR);
return (-1);
}
*LPTR = temp;
}
}
(*LPTR)[i] = '\0';
return (i);
}

