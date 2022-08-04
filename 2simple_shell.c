#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *
 *
 */

int main(int ac, char **av, char **env)
{
	char *str = NULL, char **cmd = NULL
	char *args[] = {"", NULL};
	size_t len = 1024;
	int status;
	(void)ac, (void)av;
	
	while (1)
	{
		if(isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "$ ", 2);
		if (getline(&argv, &len, stdin) == -1)
			break;
		if (str == NULL || str[0] == '\n')
			continue;
		cmd = tok(str, delim);
		if(cmd[0] == NULL)
			continue;

		argv = strtok(argv, "\n");
		if (fork() == 0)
		{
			if (execve(str, args, env) == -1)
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
