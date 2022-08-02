#include <stdio.h>
/**
 *
 *
 *
 */
int _tokenize(char *argv)
{
	int i;
	char *arr[] = 1024;
	char *delim = " \n\t"; 
	char *tok;

	tok = strtok(argv, delim);

	while (tok != NULL)
	{
		strtok = (NULL, delim);
	}
	while (arr[i])
	{
		i++;
		strdup(arr[0], tok);
	}
}
