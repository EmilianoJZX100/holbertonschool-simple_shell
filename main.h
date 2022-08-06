#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
/*function protoypes*/
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char **tok(char *str, char *delim);
char *_strdup(char *str);
char *_getenv(char *str);
char *_getenv2(char **env, char *str);
char *_which(char *fullpath, ...);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
int _putchar_s(char *s);
void _prompt(void);
int _reps(char *str, char delim);
void print_environ(char **buff);
char *cmd_discriminator(char *s);
#endif
