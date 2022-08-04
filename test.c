#include "main.h"
/**
 * 
 *
 */

int main(void)
{
	char cadena[] = "Hola,mundo";
    	char delimitador[] = ",";
    	char *token = tok(cadena, delimitador);

    	if(token != NULL)
	{
		printf("Encontramos un token: %s\n", token);
	}
	return(0);
}
