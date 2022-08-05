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
	char *str2 = _strdup(str);
	char **arr;
	char *tok;

	tok = malloc(1024);

	for (; str[i] ; i++)
	{
		for (; delim[j] ; j++)
		{
			if (delim[j] == str[i])
			{
				count++;
			}
		}
	}

	arr = malloc(sizeof(char *) * count + 1);

	if (!arr)
	{
		perror("Error");
		return (NULL);
	}

	tok = strtok(str2, delim);
	arr[k] = tok;
	for (k = 1; arr[k]; k++)
	{
		arr[k] = tok;
		tok = strtok(NULL, delim);
	}
	arr[k] = NULL;
	return (arr);
}
