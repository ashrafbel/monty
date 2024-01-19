#include <stdio.h>
#include "monty.h"

ssize_t getline(char **lineptr, size_t *n, FILE *stream) {
    char *temp;
      int c;
    size_t i = 0;
    if (lineptr == NULL || n == NULL || stream == NULL) {
        return -1;
    }

    if (*lineptr == NULL || *n == 0) {
        *n = 128;
        *lineptr = (char *)malloc(*n);
        if (*lineptr == NULL) {
            return -1;
        }
    }

  

    while ((c = fgetc(stream)) != EOF && c != '\n') {
        (*lineptr)[i++] = (char)c;

        if (i == *n - 1) {
            *n *= 2;
            temp = (char *)realloc(*lineptr, *n);
            if (temp == NULL) {
                free(*lineptr);
                return -1;
            }
            *lineptr = temp;
        }
    }

    (*lineptr)[i] = '\0';

    return i;
}

