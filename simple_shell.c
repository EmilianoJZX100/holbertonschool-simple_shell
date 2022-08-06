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
	char *str = NULL, **cmd = NULL;
	size_t len = 1024;
	int status;
	(void)argc, (void)argv;
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
		if (_strcmp(cmd[0], "exit") == 0)
		{
			free(str);
			return (0);
		}
		if (_strcmp(cmd[0], "env") == 0)
		{
			print_environ(environ);
			continue;
		}
		if (fork() == 0)
		{
			if (execve(cmd_discriminator(cmd[0]), cmd, env) == -1)
				perror("Error");
		}
<<<<<<< HEAD
		wait(&status);
=======
		else
		{
			wait(&status);
			if ((WIFEXITED(status) && (WEXITSTATUS(status) == 0)))
			{
				;
			}
		}
>>>>>>> 6025dcaa8a02695c7940dc3f317f094dafa29a5e
	}
	free(str);
	return (status);
}
