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

int main()
{
	char *argv = NULL;
	char *args[] = {"", NULL};
	size_t len = 1024;
	int status;
	ssize_t characters = 0;

	while (1)
	{
		if(isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$ ", 2);

		characters = getline(&argv, &len, stdin);

		if (characters == EOF)
			break;

		argv = strtok(argv, "\n");

		if (fork() == 0)
		{
			if (execve(argv, args, NULL) == -1)
				perror("Error");
			break;
		}
		else
		{
			wait(&status);
		}
	}
	free(argv);
	return (0);
}

/**
 * _EOF - checks for end of file
 *
 */
/*
void _EOF(char *argv)
{
	if (argv)
	{
		argv = NULL;
	}

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);

	exit(EXIT_SUCCESS);
}*/

