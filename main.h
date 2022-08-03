#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
char **splitter(char *input, char *delim);
void commands(char **tokens, char *command);
void mv(char **buffer);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char **tok(char *str, char *delim);
char *_strdup(char *str);
#endif
