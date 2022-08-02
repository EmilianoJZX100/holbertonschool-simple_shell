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
int _isatty(int fd);
#endif
