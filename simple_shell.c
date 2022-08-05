#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main -
 *
 *
 * Return: Always 0
 */
int main(int argc, char **argv, char **env)
{
	char *str = NULL, **cmd = NULL, *args[] = {"", NULL}; 
	char *delim = " \n\t";
	size_t len = 1024;
	int status;
	char *characters = 0;
	(void)argc; (void)argv;

	while (1)
	{
		if(isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$ ", 2);
		if (getline(&str, &len, stdin) == -1)
		{
			free(str);
			exit(0);
		}
		if (str == NULL || str[0] == '\n')
			continue;
		cmd = tok(str, delim);

		if (cmd[0] == NULL)
			continue;
		if (_strcmp(str, "exit") == 0)
		{
			free(str);
			return (0);
		}

		if (cmd[0][0] != '/')
	
		 if (count == strlen(str))
			 return(strdup(env[i]));
		 else
			 return (null);

		}
		if (fork() == 0)
		{
			if (execve(cmd[0], args, env) == -1)
				perror("Error");
		}
		else
		{
			wait(&status);		
			if ((WIFEXITED(status) && (WEXITSTATUS(status) == 0)))
				exit(2);
		}
	}
	free(str);
	return (0);
}
