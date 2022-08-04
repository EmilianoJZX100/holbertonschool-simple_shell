#include "main.h"
#include <stdio.h>
/*_getenv - looks for the environment string pointed by name
 * @str: character to check
 * Return: string with the value of the requested environment variable
 */

char *_getenv(const char *str)
{
	char *save, *toke;
	int i = 0;

	while (env)
	{
		save = _strdup(env[i]);
		toke = strtok(save, "=");

		if (strcmp(save, str) == 0)
		{
			toke = strtok(NULL, "=");
			return (toke);
		}
		else
			continue;
	}
	return (0);
}
