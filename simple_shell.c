#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - 
 *
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	char *str = NULL;
	char *args[] = {"", NULL};
	size_t len = 1024;
	int status;
	ssize_t characters = 0;
	(void)ac;
	(void)av;

	while (1)
	{
		if(isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$ ", 2);
		characters = getline(&str, &len, stdin);

		if (characters == EOF)
			break;

		str = strtok(str, "\n");

		if (fork() == 0)
		{
			if (execve(str, args, env) == -1)
				perror("Error");
			break;
		}
		else
			wait(&status);
	}
	free(str);
	return (0);
}
