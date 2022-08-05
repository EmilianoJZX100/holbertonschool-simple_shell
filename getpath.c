#include "main.h"
/**
 * _which - gets the path in the environment variables
 *
 * Return: path
 */

char *_which(char *fullpath, ...)
{
	char *toks = NULL, *save = NULL, *str1 = NULL, *str2 = NULL;
	int i = 0, args = 0;
	struct stat st;
	char **args2;

	save = _getenv("PATH");
	args = _reps(save, ':') + 2;
	args2 = malloc(args * sizeof(char *));

	if (args2 == NULL)
		return ("error");

	toks = strtok(save, ":");
	while (toks)
	{
		i++;
		args2[i] = _strdup(toks);
		toks = strtok(NULL, ":");
	}
	args2[i] = NULL;
	while (i < 7)
	{
		i++;
		str1 = str_concat(args2[i], "/");
		str2 = str_concat(str1, fullpath);
		if (stat(str2, &st) == 0)
			break;
		free(str1);
		free(str2);
	}
	while (args2[i])
	{
		i++;
		free(args2[i]);
	}
	return (str2);
}
