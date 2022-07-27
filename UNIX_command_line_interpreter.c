#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char *str = NULL;
	size_t len = 0;

	printf("$ ");
	getline(&str, &len, stdin);
	printf("\n %s \n", str);
	free (str);

	return(0);
}
	
