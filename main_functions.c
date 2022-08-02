#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
