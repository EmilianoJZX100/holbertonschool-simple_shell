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
	char argv2[50];
	char *args[] = {"", NULL};
	size_t len = 1024;
	int status;
	ssize_t characters = 0;
	
	if (!isatty(STDIN_FILENO))
	{
		read(0, &argv2, 1028);
		strtok(argv2, "\n");

		if (fork() == 0)
		{
			if (execve(argv2, args, NULL) == -1)
				perror("Error");
			return (0);
		}
		else
			wait(&status);
	}
	while (1)
	{
		printf("$ ");
		characters = getline(&argv, &len, stdin);
		if (characters == EOF)
			_EOF(argv);

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
	return (0);
}

/**
 * _EOF - checks for end of file
 *
 */
void _EOF(char *argv)
{
	if (argv)
	{
		argv = NULL;
	}

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);

	exit(EXIT_SUCCESS);
}         
