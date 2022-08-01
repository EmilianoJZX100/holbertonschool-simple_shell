#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - splits a string and returns an array of each word of the string
 * Return: 0
 */
char **splitter(char *input, char *delim);
void commands(char **tokens, char *command);
void mv(char **buffer);

int main(void)
{
	char *input = NULL;
	char **tokens;
	size_t len = 0;

	while (1)
	{
		printf("$ ");
		getline(&input, &len, stdin);

		if (!input)
			return (0);
	}
	tokens = splitter(input, "\n\t\r ");
	commands(tokens, tokens[0]);
	return (0);
}

char **splitter(char *input, char *delim)
{
	char *token;
	int i = 0;
	char **tokens = malloc(sizeof(char) * 1024);

	token = strtok(input, delim);

	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	return (tokens);
}
