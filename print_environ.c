#include "main.h"
/**
 * print_environ - prints the environ variable
 * @buff: buffer that contains env content to print
 */
void print_environ(char **buff)
{
	int j = 0;

	while (buff[j] != NULL)
	{
		printf("%s\n", buff[j]);
		j++;
	}
}
