#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - function that gets the input from the user & executes a command
 * @argc: counter
 * @argv: arguments
 * @env: enviromental variable
 * Return: 0 or 2
 */

int main(int argc, char **argv, char **env)
{
	char *str = NULL, **cmd = NULL, *args[] = {"", NULL};
	size_t len = 1024;
	char **path;
	int status, i = 0, arg = 0;
	(void)argc;
	(void)argv;

	while (1)
	{
		_prompt();
		if (getline(&str, &len, stdin) == -1)
		{
			free(str);
			exit(0);
		}
		if (str == NULL || str[0] == '\n')
			continue;
		cmd = tok(str, " \n\t");

		if (cmd[0] == NULL)
		{
			free(cmd);
			free(str);
			continue;
		}
		if(_strcmp(cmd[0], "exit") == 0)
		{
			free(str);
			return (0);
		}
		
		/*if (cmd[0][0] != '/')
		{
			*env = _getenv("PATH");
			path = tok(*env, ":");
		}*/

		if (fork() == 0)
		{
			if (execve(cmd[0], cmd, env) == -1)
				perror("Error");
		}
		/*else if (fork() == -1)
			perror("Error");*/
		else
		{
			wait(&status);		
			if ((WIFEXITED(status) && (WEXITSTATUS(status) == 0)))
				;
		}
	}
	free(str);
	return (status);
}
