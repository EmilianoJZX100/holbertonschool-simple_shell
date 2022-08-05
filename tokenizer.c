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
			if (delim[j] == str[i] && i > 0 && str[i -1] != delim[j]) 
			{
				count++;
			}
		}
	}
	arr = malloc(sizeof(char *) * count + 2);
	if (!arr)
	{
		perror("Error");
		return (NULL);
	}

	tok = strtok(str, delim);
	arr[k] = tok;
	k++;
	for (; k < count + 1; k++)
	{
<<<<<<< HEAD
=======
		arr[k] = _strdup(tok);
>>>>>>> 898ce9d6a47dbe5b7e869ab0e841c54b4edf38a8
		tok = strtok(NULL, delim);
		arr[k] = tok;
	}
	free(str2);
	arr[k] = NULL;
	return (arr);
}
