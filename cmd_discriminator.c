#include "main.h"
/**
 *cmd_discriminator - checks first character of string
 *@s: string
 *Return: 0
 */
char *cmd_discriminator(char *s)
{
	if (s[0] == '/' || s[0] == '.')
	{
		return (s);
	}
	return (str_concat("/bin/", s));
}
