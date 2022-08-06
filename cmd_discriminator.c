#include "main.h"
/**
 *
 */
char *cmd_discriminator(char *s)
{
	if (s[0] == '/')
	{
		return(s);
	}
	return(str_concat("/bin/", s));
}
