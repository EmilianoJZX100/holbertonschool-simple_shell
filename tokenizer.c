#include <stdio.h>
#include "main.h"

/**
 * tok - tokenize the string
 * @str: string to be tokenized
 * @delim: delimiters for the strtok
 * Return: int or NULL
 */
char **tok(char *str, char *delim)
{
	int count = 1;
	int i = 0, j = 0, k = 0;
	char **arr;
	char *tok;

	tok = malloc(1024);

	for (; str[i] ; i++)
	{
		for (; delim[j] ; j++)
		{
			if (delim[j] == str[i] && i > 0 && str[i - 1] != delim[j])
			{
				count++;
			}
		}
	}
	arr = malloc(sizeof(char) * 1024);
	if (!arr)
	{
		perror("Error");
		return ('\0');
	}

	tok = strtok(str, delim);
	arr[k] = tok;
	k++;
	for (; k < count + 1; k++)
	{
		tok = strtok('\0', delim);
		arr[k] = tok;
	}
<<<<<<< HEAD
	arr[k] = NULL;
	free(tok);
=======
	free(tok);
	arr[k] = '\0';
>>>>>>> d3c5eb8dc01dccd0ae43486c32b3c8b984d3bcf5
	return (arr);
}
