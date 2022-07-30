#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 *
 *Return: 0
 *
 */
typedef struct structure
{
	char h;
	int(*x)(char**);
}s_t;

/**function prototypes*/
char ** splitter(char *input, char *delim);
void commands(char **tokens, char *command);
void mv(char **buffer);
#endif
