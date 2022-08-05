#include "main.h"
/**
 * print_env - prints environment variables
 *
 * Return: path
 */
int print_env(char **cmd, int *exit_st)
{
	int i = 0;
	(void)cmd;

	while (environ[i] != NULL)
	{
		_putchar_s(environ[i]);
		write(1, "\n", 1);
		i++;
	}
	*exit_st = 0;
	return (1);
}
